#define TRIG_PIN 10  
#define ECHO_PIN 11  

const int BIN_HEIGHT_CM = 50;

void setup() {
    Serial.begin(9600);
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
}

long getDistance() {
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);
    long duration = pulseIn(ECHO_PIN, HIGH);
    return (duration * 0.0343) / 2;
}

void loop() {
    float distance = getDistance();
    float filledHeight = BIN_HEIGHT_CM - distance;
    if (filledHeight < 0) filledHeight = 0;
    if (filledHeight > BIN_HEIGHT_CM) filledHeight = BIN_HEIGHT_CM;
    int percentageFull = ((int)(filledHeight / 5)) * 10;

    Serial.print("PERCENT:");
    Serial.println(percentageFull);
    Serial.print("Measured Distance: ");
    Serial.print(distance);
    Serial.print(" cm -> Garbage Level: ");
    Serial.print(percentageFull);
    Serial.println("% Full");

    switch (percentageFull) {
        case 0: Serial.println("✅ Bin is completely empty."); break;
        case 10: Serial.println("🟢 5 cm filled: Bin is 10% full."); break;
        case 20: Serial.println("🟢 10 cm filled: Bin is 20% full."); break;
        case 30: Serial.println("🟡 15 cm filled: Bin is 30% full."); break;
        case 40: Serial.println("🟡 20 cm filled: Bin is 40% full."); break;
        case 50: Serial.println("🟠 25 cm filled: Bin is half full."); break;
        case 60: Serial.println("🟠 30 cm filled: Bin is 60% full."); break;
        case 70: case 80: Serial.println("⚠️ Bin is mostly full."); break;
        case 90: Serial.println("🚨 Bin is almost FULL!"); break;
        case 100: Serial.println("🚨 Bin is COMPLETELY FULL! Please empty it."); break;
        default: Serial.println("📉 Unrecognized level."); break;
    }

    delay(5000);
}