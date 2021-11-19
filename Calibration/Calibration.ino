#include <Servo.h>
#include <Arduino.h>

Servo myservo1,myservo2;  // create servo object to control a servo
Servo myservo3,myservo4;  // create servo object to control a servo
Servo myservo5,myservo6;  // create servo object to control a servo
Servo myservo7,myservo8;  // create servo object to control a servo
Servo myservo9,myservo10;  // create servo object to control a servo
Servo myservo11,myservo12;  // create servo object to control a servo
char val; // initial value of input

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  
  myservo1.attach(4);  //BR1 
  myservo2.attach(3);  //BR2
  myservo3.attach(2);  //BR3
  myservo4.attach(5);  //BL1
  myservo5.attach(6);  //BL2
  myservo6.attach(7);  //BL3
  myservo7.attach(8);  //FR1
  myservo8.attach(9);  //FR2
  myservo9.attach(10); //FR3
  myservo10.attach(11); //FL1
  myservo11.attach(13); //FL2
  myservo12.attach(12);  //FL3

//First 
myservo1.write(120);
myservo4.write(70);
myservo7.write(10);
myservo10.write(185);

//Second
myservo2.write(150);
myservo5.write(50);
myservo8.write(120);
myservo11.write(140);

//Third
myservo3.write(180);
myservo6.write(130);
myservo9.write(170);
myservo12.write(120);

}



int poser1=150;
int poser2=180;


void loop() {
//  if (Serial.available()) {
//    Serial.println("Enter a Option (q,a <---> w,s)"); 
//    val = Serial.read();
//    if (val == 'q')  {
//      poser1 += 1; 
//      myservo2.write(poser1);
//      delay(15);
//    }
//    if (val == 'w')  {
//      poser2 += 1; 
//      myservo3.write(poser2);
//      delay(15);
//    }
//    if (val == 'a')  {
//      poser1 -= 1; 
//      myservo2.write(poser1);
//      delay(15);
//    }
//    if (val == 's')  {
//      poser2 -= 1; 
//      myservo3.write(poser2);
//      delay(15);
//    }
//    Serial.print("Angles:\t");
//    Serial.print(poser1);
//    Serial.print("    ");
//    Serial.println(poser2);
//  }
}
