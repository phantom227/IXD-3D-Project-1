/* SOURCE CODE BY */
/* Doug Whitton */

/* Savannah Dalgado helped with figuring this code out */

#include <Servo.h>

// didn't change a whole lot in this code, based on the tutorial
// only had a standard motor, so I couldn't rotate continously
// I did change the servoSpeed to move in different directions
// but changing the spinners on top is what I experiemnted on

Servo servoMotor;       // creates an instance of the servo object to control a servo
int servoPin = 9;       // Control pin for servo motor
int servoAngle = 0;

void setup() {
  Serial.begin(9600);       // initialize serial communications
  servoMotor.attach(servoPin);  // attaches the servo on pin 3 to the servo object
} 
 
void loop() {

  int x = 1;
    for(int i = 65; i > 64; i = i + x){
     servoMotor.write(i);      // sets the angle of the servo to i
    
        if (i == 105) x = -1;  // switches direction
        delay(20);
        Serial.println(i);
        
    }

  
}
