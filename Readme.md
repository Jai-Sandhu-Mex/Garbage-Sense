# Garbage Sense IoT

## Overview
Garbage Sense IoT is a smart waste management system that detects the fill level of a dustbin using an ultrasonic sensor and notifies the concerned authority when it needs to be emptied. The project integrates **Arduino Uno**, **Node.js**, **MongoDB**, and **GenAI** for data analysis and predictions.

## Features
- **Real-time garbage level detection** using an **ultrasonic sensor**
- **Data logging** and **storage** using **MongoDB**
- **API for data retrieval** via **Node.js & Express**
- **AI-based predictions** for smart waste management using **GenAI**
- **Notification system** to alert users when the bin is full

## Technologies Used
- **Hardware:** Arduino Uno, Ultrasonic Sensor (HC-SR04)
- **Software & Platforms:**
  - **Arduino IDE** (for programming the microcontroller)
  - **Node.js & Express.js** (for backend server)
  - **MongoDB** (for database storage)
  - **Python (GenAI integration)**
  - **GitHub** (for version control)

## Installation & Setup

### 1️⃣ Hardware Setup
1. **Connect the Ultrasonic Sensor** to the **Arduino Uno**:
   - **VCC** → 5V
   - **GND** → GND
   - **Trigger Pin** → D10
   - **Echo Pin** → D11

2. **Upload Arduino Code**
   - Open **Arduino IDE**
   - Select **Board: Arduino Uno**
   - Select **Port**
   - Upload the code

### 2️⃣ Backend Setup (Node.js & MongoDB)
1. Install **Node.js**
   ```sh
   sudo apt install nodejs  # Linux
   brew install node        # macOS
   ```
2. Clone the repository:
   ```sh
   git clone https://github.com/Jai-Sandhu-Mex/GarbageSense.git
   cd GarbageSense
   ```
3. Install dependencies:
   ```sh
   npm install
   ```
4. Start the server:
   ```sh
   node index.js
   ```
5. Open MongoDB (or connect to a cloud MongoDB instance)
   ```sh
   mongod --dbpath=/data/db
   ```

### 3️⃣ AI Integration (GenAI)
1. Process raw sensor data from MongoDB.
2. Use Python & AI models to predict garbage fill patterns.
3. Generate insights for smart waste management.

## API Endpoints
| Method | Endpoint          | Description                   |
|--------|------------------|-------------------------------|
| GET    | `/data`          | Get latest garbage level data |
| POST   | `/update`        | Update sensor data           |
| GET    | `/predict`       | Get AI-based predictions     |

## Contributors
- **Jai Sandhu** (Node.js, MongoDB, Express.js)
- **[Teammate Name]** (GenAI Integration)

## License
This project is licensed under the **MIT License**.

## Repository
🔗 [GitHub Repo](https://github.com/Jai-Sandhu-Mex/GarbageSense)

## Contact
📩 Email: jaisandhu2022@vitbhopal.ac.in

