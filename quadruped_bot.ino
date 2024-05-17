
#include <Servo.h>

Servo rLegF1;
Servo rLegF2; 

Servo rLegB1;
Servo rLegB2; 

Servo lLegF1;
Servo lLegF2; 

Servo lLegB1;
Servo lLegB2; 

void setup() {
  rLegF1.attach(2);
  rLegF2.attach(3);
  rLegB1.attach(4);
  rLegB2.attach(5);
  lLegF1.attach(6);
  lLegF2.attach(7);
  lLegB1.attach(8);
  lLegB2.attach(9);
  
  delay(1000);

}

//movements
void hide(){
  rLegF1.write(180);
  rLegF2.write(160);
  rLegB1.write(20);
  rLegB2.write(0);
  lLegF1.write(0);
  lLegF2.write(20);
  lLegB1.write(180);
  lLegB2.write(160);
}

void sitDown(){
  rLegF1.write(135);
  rLegF2.write(180);
  rLegB1.write(0);
  rLegB2.write(135);
  lLegF1.write(45);
  lLegF2.write(0);
  lLegB1.write(45);
  lLegB2.write(180);
  
}
void standUp(){
  int DELAY = 0;
  int x = 90;
  rLegF1.write(x);
  rLegF2.write(120);
  delay(DELAY);
  rLegB1.write(60);
  rLegB2.write(x);
  delay(DELAY);
  lLegF1.write(x);
  lLegF2.write(60);
  delay(DELAY);
  lLegB1.write(x);
  lLegB2.write(120);
  delay(DELAY);
}

void frontRightForward(){
  rLegF1.write(150);
  rLegF2.write(30);
  
}

void backRightForward(){
  rLegB1.write(135);
  rLegB2.write(150);
}

void frontLeftForward(){
  lLegF1.write(30);
  lLegF2.write(150);
}

void backLeftForward(){
  lLegB1.write(30);
  lLegB2.write(30);
}

void pushBack(){
  int DELAY = 0;
  int x = 90;
  rLegF1.write(45);
  rLegF2.write(x);
  delay(DELAY);
  rLegB1.write(x);
  rLegB2.write(45);
  delay(DELAY);
  lLegF1.write(135);
  lLegF2.write(x);
  delay(DELAY);
  lLegB1.write(135);
  lLegB2.write(x);
  delay(DELAY);
}

void moveForward(){
  int DELAY = 300;
  /*frontRightForward();
  frontLeftForward();
  delay(DELAY);
  pushBack();
  delay(DELAY);
  standUp();
  delay(DELAY);*/
  backLeftForward();
  backRightForward();
  delay(DELAY);
  pushBack();
  delay(DELAY);
  standUp();
  delay(DELAY);
}

void loop() {
  hide();
  delay(4000);
  sitDown(); 
  delay(1000);
  standUp();
  delay(2000);
  
  for(int y = 0; y <=10; y++){
    moveForward();
    delay(300);
  }  
  delay(1000);
  sitDown();
  delay(1000);
  hide();
  delay(10000);
}
