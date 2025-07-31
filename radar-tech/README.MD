# How to use this project?
## step by step instructions

### Tools needed
- jumper wires
- arduino uno
- ultrasonic sensor
- servo motor
- download the processing software using this link below
- https://processing.org/download


- port --> COM7 in my case you can see in arduino IDE and change it accordingly

### Ultrasonic Connections

- vcc(Voltage at Common Collector) --> 3.3v
- trigger --> digital pin 10
- echo --> digital pin 11
- GND --> GND

### Servo motor connections

- signal pin --> 12 digital pin
- vcc --> 5v
- GND --> GND

Before running the code in the processor check your arduino port in the laptop arduino ide and change it here as I have port COM7. In your case it cane be different check once and if it is different than put that port in this code below instead of COM7.



```
myPort = new Serial(this, "COM7", 9600); // ✅ My Arduino is on COM7
```
