#include <Servo.h>

Servo servo1;  // create servo object to control a servo
//Servo servo2;  
//Servo servo3;  
//Servo servo4;  
//Servo servo5;  

int pos = 0;    // variable to store the servo position

void ServoSetup() 
{
  Serial.println("Calibrating...");
  
  servo1.attach(9); //tells the servo what pin to use
  //servo1.attach(9);  
  //servo1.attach(9);  
  //servo1.attach(9);  
  //servo1.attach(9);
  delay(1000);
}

void ServoLoop() 
{
  for (pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees
  { 
        servo1.write(180);// tell servo to go to position in variable 'pos'
        /*servo2.write(90);
        servo3.write(90);
        servo4.write(90);
        servo5.write(90);*/
  }
  delay(1000);
  Serial.println("Servo 1 Calibrated");
}
