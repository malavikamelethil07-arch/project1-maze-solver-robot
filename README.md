# 🚗 Obstacle Avoidance Robot
## 📌 Description
This project is an Arduino-based obstacle avoidance robot that uses an ultrasonic sensor to detect obstacles and automatically change direction to avoid collisions.

The maze solver robot is an excellent autonomous robotic system designed to navigate through maze,identify obstacles and change routee if any with the help of ultrasonic sensor and arduino uno.
It is a beginner friendly level robotics project and helps in understanding practical applications of autonomous navigation systems, which are widely used in self-driven cars,and rescue operations where it is difficult for humans to get into.


## 🧰 Components Required--Hardware

| Component | Quantity |
|----------|----------|
| Arduino Uno 🟦 | 1 |
| Ultrasonic Sensor 📡 | 1 |
| Servo Motor 🔄 | 1 |
| Motor Driver 🚗 | 1 |
| DC Motors ⚙️ | 2 |
| Battery pack🔋 | 1 |

## Software required:

| | 🧩 Software            | 🔍 Purpose                    |
| ------ | ---------------------- | ----------------------------- |
| 1      | Arduino IDE 🟦         | Writing & uploading code      |
| 2      | VS Code 🖥️            | Code editing (optional)       |
| 3      |  Tinkercad 🔬 | Circuit simulation (optional) |
| 4      | Serial Monitor 📡      | Debugging output              |
## 🔌 Circuit Connections

-  Trig → Pin 4  
- Echo → Pin 5  
- Motor IN1 → Pin 8  
- Motor IN2 → Pin 9  
- Motor IN3 → Pin 6  
- Motor IN4 → Pin 7  
<img src="https://github.com/user-attachments/assets/95f24ab0-8a96-4897-8a97-6f35dc1bbf86" width="300">

## ⚙️ Working Principle
The ultrasonic sensor measures distance. If an obstacle is detected within a threshold, the robot stops and changes direction using motors controlled via the motor driver.
## 💻 Code
[Click here to view code](mazesolver.cpp).However the psuedo code is as given:

```cpp
// sample snippet
START

Initialize  
Initialize ultrasonic sensor

LOOP forever:
    Measure distance using sensor
    
    IF distance < threshold THEN
        Stop robot
        Turn servo to right
        Measure right distance
        
        Turn servo to left
        Measure left distance
        
        IF right distance > left distance THEN
            Turn robot right
        ELSE
            Turn robot left
        ENDIF
        
    ELSE
        Move forward
    ENDIF

END LOOP

END
```
---

## 📸 Project Images

<img src="https://github.com/malavikamelethil07-arch/project1-maze-solver-robot/blob/00dd8a6efa14dded02fbaefb61cfef4febf2dbe1/finalmaze.jpeg" width="300">

## 🎥 Demo Video
[Click here to watch](https://github.com/user-attachments/assets/2685f03d-c145-40f2-8f69-ea68caa55ef4)
## 🚀How to Run
  1. Upload the code to Arduino
2. Connect all components
3. Power the circuit
4. Place robot on surface
## 📚 What I Learned
- Arduino programming
- Sensor integration
- Motor control
- Debugging hardware issues, stimulation tools
- Version control using github and github basics
## 🔮 Future Improvements
- Add Bluetooth control
- Improve obstacle detection accuracy
- Add camera module
## 👩‍💻 Author
 **Malavika**-
 Btech student in Electronics and communication


