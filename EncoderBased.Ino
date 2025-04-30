#include <PRIZM.h>
#include <math.h>
PRIZM prizm;


/*
//Servo 1 = Intake(CH1-Mech)
//Servo 2 = Arm(CH4-Mech)
//CR 1 = H-Drive(CH1-Drive)
//CR 2 = Pivot(CH2-Mech)
//Motor 1 = Drive Left and Right (Drive)
//Motor 2 = Up and Down (Mech)
*/

double WHEEL_RADIUS = 2.8


void distance(double distance){
  return distance / (2 * WHEEL_RADIUS * 3.14159);
}

class Center

prizm.setMotorTarget(100, prizm.readEncoderDegrees(1) + distance());

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
