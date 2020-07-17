#include <Servo.h> // libraty for servo motor
Servo myServo1;
Servo myServo2;
Servo myServo3;

void setup() {
  // put your setup code here, to run once:
  // connection of servo motors
  myServo1.attach(9);
  myServo2.attach(10);
  myServo3.attach(11);

}

void loop() {
  // put your main code here, to run repeatedly:
  myServo1.write(0);
  delay(2000);
  myServo1.write(180);
  delay(2000);

  myServo2.write(0);
  delay(2000);
  myServo2.write(180);
  delay(2000);

  myServo3.write(0);
  delay(2000);
  myServo3.write(180);
  delay(2000);
  
}
