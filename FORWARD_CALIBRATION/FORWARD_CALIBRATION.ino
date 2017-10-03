
Servo servoL;                                // Define the left and right servos

// Perform these steps with the Arduino is first powered on

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);                        // Set up Arduino Serial Monitor at 9600 baud
  servoR.attach(13);                         // Attach (programmatically connect) servos to pins on Arduino
  servoL.attach(12);
}

void loop() {
  // put your main code here, to run repeatedly:
  servoL.writeMicroseconds(1640);      // Steer forward
  servoR.writeMicroseconds(1390);
  delay(10000);
  servoL.detach(); // Disconnect the servos.
  servoR.detach();
}
