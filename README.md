Sure! Here's a complete and well-formatted **README.md** file for your **Smart Trash Collection Robot System** project. You can copy this and save it as `README.md` in your GitHub repository or project folder.

---

# ♻️ Auto Trash Collection Car & Auto Trash Bin System

This project is a prototype **Smart Trash Collection System**, consisting of a **mobile trash collection robot** and an **automated trash bin station**, designed to demonstrate intelligent waste collection in a simplified environment.

---

## 🚗 Project Overview

This system uses:

* A **DIY mobile robot** built using the [Cytron Line Following Mobile Robot Kit](https://my.cytron.io/p-line-following-mobile-robot-kit)
* **Maker UNO boards** as the primary microcontrollers
* Sensors for **autonomous navigation** and **object detection**
* Servo motors to **automate the trash bin opening/closing**

The project demonstrates how autonomous robots and smart bins can work together to automate waste collection processes.

---

## 📦 System Components

### 1. Auto Trash Collection Car (🚘 `Auto_bus_system`)

#### Hardware:

* **Platform:** Cytron Line Following Mobile Robot Kit
* **Controller:** Maker UNO
* **Sensors:**

  * Ultrasonic sensor (for obstacle avoidance)
  * IR sensor (for line following and trash detection)

#### Key Functions:

* Follows a predefined path using IR sensors.
* Detects and avoids obstacles using the ultrasonic sensor.
* Approaches the trash station when it detects a bin.

---

### 2. Auto Trash Bin Station (🗑️ `Auto_trash_bin_rotation_servo`)

#### Hardware:

* **Controller:** Maker UNO
* **Actuators:** Servo motor (controls bin lid rotation)

#### Key Functions:

* Detects the robot's arrival using sensors.
* Rotates the trash bin lid open when the robot approaches.
* Closes the lid once trash has been deposited.

---

## 🔧 How It Works

1. The robot follows a line using its IR sensors.
2. It continuously scans for obstacles and avoids them using the ultrasonic sensor.
3. When the robot reaches the bin station:

   * It stops in front of the bin.
   * Sends a trigger (or the bin detects the robot).
   * The trash bin servo rotates, opening the lid.
4. The robot simulates trash dumping.
5. The bin lid closes automatically.
6. The robot continues its journey.

---

## 🛠️ Setup and Installation

### Hardware Setup:

* Assemble the [Cytron Robot Kit](https://my.cytron.io/p-line-following-mobile-robot-kit) as per the instructions.
* Connect the sensors (ultrasonic and IR) to the Maker UNO robot.
* Attach the servo motor to the trash bin, controlled by a second Maker UNO.
* Use jumper wires and a breadboard to connect the components.

### Software Setup:

1. Install the **Arduino IDE**.
2. Install the **Maker UNO board support** via the Arduino Board Manager.
3. Upload the respective `.ino` files:

   * `Auto_bus_system.ino` → Robot
   * `Auto_trash_bin_rotation_servo.ino` → Trash bin station

---

## 📂 Code Files

| File Name                           | Description                               |
| ----------------------------------- | ----------------------------------------- |
| `Auto_bus_system.ino`               | Code for the smart trash collection robot |
| `Auto_trash_bin_rotation_servo.ino` | Code for the smart rotating trash bin     |

---

## ⚙️ Future Enhancements

* Add **wireless communication** (Bluetooth/Wi-Fi) between the robot and bin.
* Implement **trash detection sensors** to confirm successful dumping.
* Use a camera module for **visual navigation**.
* Expand to multiple bins and multiple robots.

---

## ❌ Limitations

* Basic line-following and obstacle detection only.
* Trash dumping is simulated, not physically collecting real trash.
* Works in a simple environment without complex navigation algorithms.

---

## 📸 Demo Video (Optional)

Watch the prototype in action:  
[![Watch the video](https://img.youtube.com/vi/qRxztZNw0ns/0.jpg)](https://youtu.be/qRxztZNw0ns)



---

## 👨‍💻 Developed By

Thong Jing Xian, Asia Pacific University (APU)

---

Let me know if you'd like to add:

* Circuit diagrams
* Hardware schematics
* GIF demos
* Troubleshooting steps
