//Servo Test
//Range:0-180

//bring servo object and function

#include<Servo.h>
//create instance of servo object
Servo servoA;
Servo servoB;

//set up -run one thime

void setup() {
  //Attach Servo to pin 9
  servoA.attach(9);//Left Wheel // number reads 470
  servoB.attach(10);//Right Wheel
  
  //rotate servo at 0 and 180
  servoA.write(0);//clock wise
  delay(2000);//clock wise
  servoA.write(90);
  servoB.write(0);
  delay(2000);
  servoA.write(180);//counter clockwise
  servoB.write(180);
  delay(4000);
  servoA.write(0);
  servoB.write(0);
  delay(3000);
  servoB.write(180);
  delay(1000);
  servoB.write(90);
  servoA.write(180);
  delay(1000);
  servoA.write(90);
  servoB.write(90);
 
}

void loop() {
  //using photo resistor
  Serial.println(analogRead(0));
  if(analogRead(0) > 550){
    servoA.write(0);
    servoB.write(180);
  }
  if (analogRead(0)<550){
    servoA.write(90);
    servoB.write(90);
  }
}
