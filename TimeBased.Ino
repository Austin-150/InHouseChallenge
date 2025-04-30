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


void setup() {
  prizm.PrizmBegin();
  prizm.setCRServoState(2, -100);
}
//
//
void extension_up() {
  prizm.setMotorPower(2, -100);
  delay(500);
  prizm.setMotorPower(2, 125);
}
//
//
void arm_up() {
  prizm.setServoPosition(2, 0);
  delay(5000);
  //prizm.setCRServoState(1,  100);
}
//
//
void Up_Side_Tall() {
  prizm.setMotorPower(2, -100);
  delay(1900);
  prizm.setMotorPower(2, 125);
}
//
//
void Down_Side_Tall() {
  prizm.setMotorPower(2, 100);
  delay(1750);
  prizm.setMotorPower(2, 125);
}
//
//
void arm_Down() {
  prizm.setServoPosition(2, 180);
  delay(200);
  prizm.setCRServoState(2, -100);
  delay(1000);
}
//
//
void extension_Down() {
  prizm.setMotorPower(2, 100);
  delay(500);
  prizm.setMotorPower(2, 125);
}
//
//
void drive_Foward() {
  prizm.setMotorPower(1, 50);
  delay(3000);
  prizm.setMotorPower(1, 125);
  delay(1000);
}
//
//
void drive_Foward_5th_Sec() {
  prizm.setMotorPower(1, 50);
  delay(1000);
  prizm.setMotorPower(1, 125);
  delay(1000);
}
//
//
void drive_Back() {
  prizm.setMotorPower(1, -75);
  delay(2000);
  prizm.setMotorPower(1, 125);
  delay(1000);
}
//
//
void Slide_2_Sec_Left() {
  prizm.setCRServoState(1, -100);
  delay(2000);
  prizm.setCRServoState(1, 0);
}
//
//
void Side_Park() {
  prizm.setCRServoState(1, 100);
  delay(8000);
  prizm.setCRServoState(1, 0);
}
//
//
void Slide_2_Sec_Right() {
  prizm.setCRServoState(1, 100);
  delay(2000);
  prizm.setCRServoState(1, 0);
}
//
//
void Drive_Foward_Half_Sec() {
  prizm.setMotorPower(1, 50);
  delay(500);
  prizm.setMotorPower(1, 125);
  delay(1000);
}
//
//
void Drive_Back_Half_Sec() {
  prizm.setMotorPower(1, -50);
  delay(500);
  prizm.setMotorPower(1, 125);
  delay(1000);
}
//
//
void Drive_Intake_Forward() {
  prizm.setMotorPower(1, 50);
  delay(500);
  prizm.setMotorPower(1, 125);
  delay(1000);
}
//
//
void Drive_Intake_Backward() {
  prizm.setMotorPower(1, -50);
  delay(500);
  prizm.setMotorPower(1, 125);
  delay(1000);
}
//
//
void Outake() {
  prizm.setCRServoState(2, 100);
  delay(1500);
  prizm.setServoPosition(1, 180);
  delay(1000);
}
//
//
void Outake_Side() {
  prizm.setCRServoState(2, 100);
  prizm.setServoPosition(1, 180);
  delay(2000);
  prizm.setCRServoState(2, -100);
}
//
//
void Intake() {
  prizm.setCRServoState(2, 0);
  prizm.setServoPosition(1, 0);
  delay(1000);
  Drive_Intake_Forward();
  delay(1000);
  Drive_Intake_Backward();
  delay(1000);
  prizm.setCRServoState(2, -100);
}
//
//
//
void Middle_Auto() {
  extension_up();
  delay(100);
  arm_up();
  delay(100);
  drive_Foward();
  delay(100);
  Outake();
  delay(100);
  drive_Back();
  delay(100);
  arm_Down();
  delay(1000);
  extension_Down();
  delay(100);
  Side_Park();
  prizm.PrizmEnd();
}
//
//
//
void Side_3_Top() {
  extension_up();  //1 Peice
  delay(100);
  drive_Foward_5th_Sec();
  delay(100);
  Slide_2_Sec_Left();
  delay(100);
  Up_Side_Tall();
  delay(100);
  Drive_Foward_Half_Sec();
  delay(100);
  Outake_Side();
  delay(100);
  Drive_Back_Half_Sec();
  delay(100);
  Down_Side_Tall();
  delay(100);
  Slide_2_Sec_Right();
  delay(100);
  // arm_Down();
  delay(100);
  extension_Down();
  delay(100);
  Intake();
  delay(100);
  extension_up();  //2 Peice
  delay(100);
  Slide_2_Sec_Left();
  delay(100);
  Up_Side_Tall();
  delay(100);
  Drive_Foward_Half_Sec();
  delay(100);
  Outake_Side();
  delay(100);
  Drive_Back_Half_Sec();
  delay(100);
  Down_Side_Tall();
  delay(100);
  Slide_2_Sec_Right();
  delay(100);
  // arm_Down();
  delay(100);
  extension_Down();
  delay(100);
  Intake();
  delay(100);
  extension_up();  //3 Peice
  delay(100);
  Slide_2_Sec_Left();
  delay(100);
  Up_Side_Tall();
  delay(100);
  Drive_Foward_Half_Sec();
  delay(100);
  Outake_Side();
  delay(100);
  Drive_Back_Half_Sec();
  delay(100);
  Down_Side_Tall();
  delay(100);
  Slide_2_Sec_Right();
  delay(100);
  // arm_Down();
  delay(100); 
  extension_Down();
  prizm.PrizmEnd();
}
//
//
//
//
//
void loop() {
  //
  //Middle_Auto();  //Very Good and Repeatable
  //
  Side_3_Top();       //Need better Drive
  //
  //Side_3levels();     //Havnt Started
}
