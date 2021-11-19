#include <Servo.h>
#include <Arduino.h>

Servo myservo1,myservo2;  // create servo object to control a servo
Servo myservo3,myservo4;  // create servo object to control a servo
Servo myservo5,myservo6;  // create servo object to control a servo
Servo myservo7,myservo8;  // create servo object to control a servo
Servo myservo9,myservo10;  // create servo object to control a servo
Servo myservo11,myservo12;  // create servo object to control a servo

int Theta1[3], Theta2[3], Theta3[3];
char val; // initial value of input

int poser1=0;
int poser2=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);  
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


  //Calibrating Theta Positions
  Theta1[0]= theta1_0(0);
  Theta1[1]= theta1_1(0);
  Theta1[2]= theta1_2(0);
  Theta1[3]= theta1_3(0);
  
  Theta2[0]= theta2_0(0);
  Theta2[1]= theta2_1(0);
  Theta2[2]= theta2_2(0);
  Theta2[3]= theta2_3(0);

  Theta3[0]= theta3_0(0);
  Theta3[1]= theta3_1(0);
  Theta3[2]= theta3_2(0);
  Theta3[3]= theta3_3(0);

  myservo10.write(Theta1[0]);
  myservo7.write(Theta1[1]);
  myservo1.write(Theta1[2]);
  myservo4.write(Theta1[3]);
  
  //Second
  myservo11.write(Theta2[0]);
  myservo8.write(Theta2[1]);
  myservo2.write(Theta2[2]);
  myservo5.write(Theta2[3]);
  
  //Third
  myservo12.write(Theta3[0]);
  myservo9.write(Theta3[1]);
  myservo3.write(Theta3[2]);
  myservo6.write(Theta3[3]);

}

void loop() {
  //put your main code here, to run repeatedly:
  Theta2[0]=theta2_0(60);
  Theta2[1]=theta2_1(60);
  Theta2[2]=theta2_2(60);
  Theta2[3]=theta2_3(60);
  
  myservo11.write(Theta2[0]);
  myservo8.write(Theta2[1]);
  myservo2.write(Theta2[2]);
  myservo5.write(Theta2[3]);

  delay(1000);

  Theta2[0]=theta2_0(-110);
  Theta2[1]=theta2_1(-110);
  Theta2[2]=theta2_2(-110);
  Theta2[3]=theta2_3(-110);
  
  myservo11.write(Theta2[0]);
  myservo8.write(Theta2[1]);
  myservo2.write(Theta2[2]);
  myservo5.write(Theta2[3]);
  
  delay(1000);

  Theta3[0]=theta3_0(80);
  Theta3[1]=theta3_1(80);
  Theta3[2]=theta3_2(80);
  Theta3[3]=theta3_3(80);
  
  myservo12.write(Theta3[0]);
  myservo9.write(Theta3[1]);
  myservo3.write(Theta3[2]);
  myservo6.write(Theta3[3]);

  delay(1000);

  Theta3[0]=theta3_0(-80);
  Theta3[1]=theta3_1(-80);
  Theta3[2]=theta3_2(-80);
  Theta3[3]=theta3_3(-80);
  
  myservo12.write(Theta3[0]);
  myservo9.write(Theta3[1]);
  myservo3.write(Theta3[2]);
  myservo6.write(Theta3[3]);
  
  delay(1000);
  
}

int theta1_0(int theta)
{
  theta=180+theta;
  return theta;
}
int theta1_1(int theta)
{
  theta=10+theta;
  return theta;
}
int theta1_2(int theta)
{
  theta=120+theta;
  return theta;
}
int theta1_3(int theta)
{
  theta=70+theta;
  return theta;
}
int theta2_0(int theta)
{
  theta=113+theta;
  return theta;
}
int theta2_1(int theta)
{
  theta=76+theta;
  return theta;
}
int theta2_2(int theta)
{
  theta=112+theta;
  return theta;
}
int theta2_3(int theta)
{
  theta=82+theta;
  return theta;
}
int theta3_0(int theta)
{
  theta=93+theta;
  return theta;
}
int theta3_1(int theta)
{
  theta=106+theta;
  return theta;
}
int theta3_2(int theta)
{
  theta=129+theta;
  return theta;
}
int theta3_3(int theta)
{
  theta=105+theta;
  return theta;
}
