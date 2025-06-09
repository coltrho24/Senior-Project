#include <Servo.h>

Servo RFthruster;
Servo RBthruster;
Servo LFthruster;
Servo LBthruster;

Servo FRthruster;
Servo FLthruster;
Servo BLthruster;
Servo BRthruster;

void ThrusterSetup() 
{
  Serial.println("Thrusting...");
  // ventral
  RFthruster.attach(2);
  RBthruster.attach(3);
  LFthruster.attach(4);
  LBthruster.attach(5);

  // lateral
  FRthruster.attach(6);
  FLthruster.attach(7);
  BLthruster.attach(8);
  BRthruster.attach(9);
  
  RFthruster.writeMicroseconds(1500);
  RBthruster.writeMicroseconds(1500);
  LFthruster.writeMicroseconds(1500);
  LBthruster.writeMicroseconds(1500);
  
  FRthruster.writeMicroseconds(1500);
  FLthruster.writeMicroseconds(1500);
  BLthruster.writeMicroseconds(1500);
  BRthruster.writeMicroseconds(1500);
  delay(7000);
}

void ThrusterLoop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  Serial.println("RF");
  BRthruster.writeMicroseconds(1500);
  
  RFthruster.writeMicroseconds(1600);
  delay(2000);
  Serial.println("RB");
  RFthruster.writeMicroseconds(1500);
  
  RBthruster.writeMicroseconds(1600);
  delay(2000);
  Serial.println("LF");
  RBthruster.writeMicroseconds(1500);
  
  LFthruster.writeMicroseconds(1600);
  delay(2000);
  Serial.println("LB");
  LFthruster.writeMicroseconds(1500);
  
  LBthruster.writeMicroseconds(1600);
  delay(2000);
  Serial.println("FR");
  LBthruster.writeMicroseconds(1500);
  
  FRthruster.writeMicroseconds(1600);
  delay(2000);
  Serial.println("FL");
  FRthruster.writeMicroseconds(1500);
  
  FLthruster.writeMicroseconds(1600);
  delay(2000);
  Serial.println("BL");
  FLthruster.writeMicroseconds(1500);
  
  BLthruster.writeMicroseconds(1600);
  delay(2000);
  Serial.println("BR");
  BLthruster.writeMicroseconds(1500);
  
  BRthruster.writeMicroseconds(1600);
}
