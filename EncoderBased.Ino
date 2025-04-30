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

double WHEEL_RADIUS = 2;
int TICKS_PER_ROTATION = 1440;
double ROTATIONS_PER_INCH = 6.75;


void distance(double distance){
  return ((TICKS_PER_ROTATION * distance) / (60 * 2 * WHEEL_RADIUS * M_PI));
}

void height(double distance){
  return ((TICKS_PER_ROTATION * distance * ROTATIONS_PER_INCH) / (60 * 2));
}

void setup() {
  prizm.PrizmBegin();
  prizm.setMotorTarget(100, prizm.readEncoderDegrees(1) + distance(10));
}

void loop() {
  // put your main code here, to run repeatedly:

}
