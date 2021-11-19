#include <Servo.h>
#include <math.h>
#include <Arduino.h>

Servo myservo1,myservo2;  // create servo object to control a servo
Servo myservo3,myservo4;  // create servo object to control a servo
Servo myservo5,myservo6;  // create servo object to control a servo
Servo myservo7,myservo8;  // create servo object to control a servo
Servo myservo9,myservo10;  // create servo object to control a servo
Servo myservo11,myservo12;  // create servo object to control a servo

int Theta1[3], Theta2[3], Theta3[3];
char val; // initial value of input

double poser1=0;
int poser2=0;
  


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
//  if (Serial.available()) {
//    Serial.println("Enter a Option (q,a <---> w,s)"); 
//    val = Serial.read();
//    if (val == 'q')  {
//      poser1 += 0.5; 
//      X_axis(poser1, 9);
//    }
//    if (val == 'a')  {
//      poser1 -= 0.5; 
//      X_axis(poser1, 9);
//    }
//    Serial.println(poser1);
//}
  double z=-2.5;
  for (int i=0;z<2; i++)
  {
    X_axis(z,9);
    z=z+0.5;
  }
    for (int i=0; z>-3;i++)
  {
    X_axis(z,9);
    z=z-0.5;
  }
}

void X_axis(double x, double z)
{
  double l1 = 6.5;
  double l2 = 5.5;
    
  double theta2a = atan2(x,z);
  double z_new = sqrt((z*z)+(x*x));
  double theta2b = theta2a + acos( ((l1*l1)+(z_new*z_new)-(l2*l2))/(2*l1*z_new));
  double theta2 = (theta2b*(180/PI));
 

  double theta3a = PI- acos(((l2*l2)+(l1*l1)-(z_new*z_new))/(2*l1*l2));
  double theta3 = theta3a*(180/PI);
  
  if(theta2>-110 && theta2<110){
  if(theta3>-150 && theta3<150){
       //Set angles
        myservo11.write(theta2_0(theta2));
        myservo8.write(theta2_1(theta2));
        myservo2.write(theta2_2(theta2));
        myservo5.write(theta2_3(theta2));
        
        myservo12.write(theta3_0(theta3));
        myservo9.write(theta3_1(theta3));
        myservo3.write(theta3_2(theta3));
        myservo6.write(theta3_3(theta3));
        
      }else{}
    }
    else{}
        
    Serial.print("Theta1: ");
    Serial.println(theta2);
    Serial.print("Theta2: ");
    Serial.println(theta3);

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
