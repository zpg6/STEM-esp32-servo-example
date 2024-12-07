
#include <ESP32Servo.h>
Servo servo1;

void setup() {
  delay(250);          // small delay for proper power up

  servo1.attach(19);   // configure the data pin 19
  
  delay(2000);         // wait for liftoff
  servo1.write(0);     // move the motor
  
  delay(2000);         // wait for a moment
  servo1.write(180);   // reset for next swing
} 

void loop() {}
