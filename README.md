## 🤖 Project Overview
A modular 4WD autonomous robot built using an Arduino Uno and an L298N motor driver, combining mechanical layout design with embedded C/C++ control logic.

![Completed 4WD Chassis Assembly](![Completed 4WD Chassis Assembly](4WD%20Robotic%20Car%20Assy.jpeg)

## 🛠️ Hardware & Wiring Architecture
* **Chassis & Drivetrain:** 4x TT gear motors wired in parallel (left side paired, right side paired) to create a clean 2-channel drive configuration.
* **Power Distribution:** 18650 Li-ion battery pack supplying the L298N driver `12V` and `GND`, with a common ground bridged to the Arduino Uno.

![L298N Driver Mounted on Lower Deck]![L298N Driver Mounted on Lower Deck](L298%20driver%20assy%20on%20lower%20deck.jpeg)
![Arduino and Power Integration](images/UNO_and_battery_box_assy.jpeg)
## 🧪 Testing & Verification
* **Manual Power Check:** Verified continuity and free rotation of all wheel assemblies.
* **Code Integration:** Uploaded initial directional loops (`digitalWrite` logic) via Arduino IDE.

![System Power Check](images/function_check.jpeg)****
