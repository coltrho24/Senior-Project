void setup() 
{
  Serial.begin(9600);
  Serial.println("Starting to Calibrate");

  //calibrarte the gyros
  Serial.println("Starting the Gyros");
  GyroSetup();
  delay(1000);

  //calibrate the Servos
  Serial.println("Starting the servos");
  ServoSetup();
  delay(1000);

  //calibrate the Thrusters/ESCs
  Serial.println("Starting the thrusters");
  //ThrusterSetup();
  delay(1000);
}

void loop() 
{
  GyroLoop();
  delay(5000);

  ServoLoop();
  delay(5000);

  //ThrusterLoop();
  //delay(5000);
}
