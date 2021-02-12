/* Doug Whitton */

#include <Servo.h>

// didn't change a whole lot in this code, based on the tutorial
// only had a standard motor, so I couldn't rotate continously
// I did change the servoSpeed to move in different directions
// but changing the spinners on top is what I experiemnted on

Servo servoMotor;       // creates an instance of the servo object to control a servo
int servoPin = 9;       // Control pin for servo motor
//int servoSpeed = 175;   // set a variable for the speed of the continuous servo, can be sped up or slowed down
int servoSpeed = 0;
//int servoSpeed = 180;

void setup() {
  Serial.begin(9600);       // initialize serial communications
  servoMotor.attach(servoPin);  // attaches the servo on pin 3 to the servo object
   
} 
 
void loop() {
 
  servoMotor.write(servoSpeed);//run the continuous servo at the speed the var is set to
  
}
