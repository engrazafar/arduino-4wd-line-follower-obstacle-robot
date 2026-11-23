## 🤖 Project Overview
A modular 4WD autonomous robot built using an Arduino Uno and an L298N motor driver, combining mechanical layout design with embedded C/C++ control logic.

## 📦 Bill of Materials (BOM)
* 2x Chassis Frames
* 4x Wheels (Tyres)
* 4x TT Gear Motors
* 1x Servo Motor
* 1x L298N Motor Driver
* 1x Arduino Uno
* IR Line Sensors
* 1x HC-SR04 Ultrasonic Sensor
* 18650 Battery Box & Accessories

![Bill of Materials](<Assembly Images/BOM.jpeg>)

---

## 🛠️ Assembly Sequence

### 1. Basic Chassis & Motors
* **Chassis & Drivetrain:** 4x TT gear motors wired in parallel (left side paired, right side paired) to create a clean 2-channel drive configuration.
![Basic Chassis Assembly](<Assembly Images/Basic Assy.jpeg>)

### 2. L298N Motor Driver Assembly
L298N motor driver mounted on the chassis.
![L298N Driver Assembly](<Assembly Images/Assy with L298 Motor driver.jpeg>)

### 3. Arduino Uno & Battery Box Assembly
* **Power Distribution:** 18650 Li-ion battery pack supplying the L298N driver `12V` and `GND`, with a common ground bridged to the Arduino Uno. Arduino Uno and battery box integrated into the build. 
![UNO and Battery Box Assembly](<Assembly Images/UNO Assy.jpeg>)


## 🧪 Testing & Verification
* **Manual Power Check:** Verified continuity and free rotation of all wheel assemblies.
* **Code Integration:** Uploaded initial directional loops (`digitalWrite` logic) via Arduino IDE.

![System Power Check](images/function_check.jpeg)****
