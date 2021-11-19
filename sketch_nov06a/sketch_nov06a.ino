#include <Servo.h>
#include <Arduino.h>

Servo myservo1,myservo2;  // create servo object to control a servo
Servo myservo3,myservo4;  // create servo object to control a servo
Servo myservo5,myservo6;  // create servo object to control a servo
Servo myservo7,myservo8;  // create servo object to control a servo
Servo myservo9,myservo10;  // create servo object to control a servo
Servo myservo11,myservo12;  // create servo object to control a servo

// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int read_pos[1];
int i,j;

void setup() {
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
myservo10.write(180);

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

//for (i=120, j=170; i<180 , j>100; i++, j--)
//{
//  myservo3.write(j+10);
//  myservo6.write(i+10);
//  myservo9.write(j-20);
//  myservo12.write(i);
//  myservo5.write(i-60);
//  myservo11.write(i-30);
//  myservo8.write(j-60);
//  myservo2.write(j-30);
//  
//  delay(15);
//}
//
//for (i=180, j=100; i>100 , j<180; i--, j++)
//{
//  myservo3.write(j+10);
//  myservo6.write(i+10);
//  myservo9.write(j-20);
//  myservo12.write(i);
//  myservo5.write(i-60);
//  myservo11.write(i-30);
//  myservo8.write(j-60);
//  myservo2.write(j-30);
//  delay(15);
//}
//
////First 
//myservo1.write(120);
//myservo4.write(70);
//myservo7.write(10);
//myservo10.write(180);
//
////Second
//myservo2.write(150);
//myservo5.write(120);
//myservo8.write(120);
//myservo11.write(140);
//
////Third
//myservo3.write(180);
//myservo6.write(130);
//myservo9.write(170);
//myservo12.write(130);
//
//
//  
}

void loop() {

//for (int i=45;i<90;i++)
//{
//  myservo12.write(i);
//  delay(15);
//}
//
//for (int i=90;i>45;i--)
//{
//  myservo12.write(i);
//  delay(15);
//}

//for (i=120, j=170; i<180 , j>100; i++, j--)
//{
//  myservo3.write(j+10);
//  myservo6.write(i-30);
//  myservo9.write(j-20);
//  myservo12.write(i-50);
//  myservo5.write(i-60);
//  myservo11.write(i-30);
//  myservo8.write(j-60);
//  myservo2.write(j-30);
//  
//  delay(5);
//}
//
//for (i=180, j=100; i>100 , j<180; i--, j++)
//{
//  myservo3.write(j+10);
//  myservo6.write(i-30);
//  myservo9.write(j-20);
//  myservo12.write(i-50);
//  myservo5.write(i-60);
//  myservo11.write(i-30);
//  myservo8.write(j-60);
//  myservo2.write(j-30);
//  delay(5);
//}

}
