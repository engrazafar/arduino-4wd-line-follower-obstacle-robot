# Arduino 4WD Line Follower & Obstacle Avoiding Robot

A hands-on robotics and embedded control portfolio build by **Raza Farooq**—a Mechanical Engineer with **8+ years of automotive localization, tooling, EV/HEV parts development, and manufacturing process improvement experience** (including work at SAZGAR Engineering Works Ltd. and MGA Industries Pvt. Ltd.). This project documents the transition from mechanical assembly, hardware layout, and BOM verification to Arduino C/C++ motor control and autonomous sensor integration.

---

## Project Overview

This repository tracks the step-by-step build and programming of a **4-wheel drive (4WD) robotic platform** powered by an **Arduino Uno** and an **L298N dual H-bridge motor driver**. 

Rather than jumping straight into complex autonomy, the project follows a structured engineering workflow:
* **Mechanical & Drivetrain Foundation:** Assembling the multi-deck chassis, mounting four TT gear motors with wheels, and wiring left/right motor pairs in parallel for clean 2-channel drive control.
* **Power & Signal Integration:** Driving the L298N from an 18650 battery pack with a shared ground reference to the Arduino Uno, followed by incremental verification of power indicators and directional control logic.
* **Incremental Code & Sensor Expansion:** Starting with basic LED and motor forward/reverse/stop sketches (`src/01_motor_test`) before integrating the **HC-SR04 ultrasonic sensor**, **servo motor**, and **IR line sensors** for obstacle avoidance and line following.

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
