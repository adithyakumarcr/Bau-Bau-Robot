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
  Theta1[0]= 180;
  Theta1[1]= 10;
  Theta1[2]= 120;
  Theta1[3]= 70;
  
  Theta2[0]= 113;
  Theta2[1]= 76;
  Theta2[2]= 112;
  Theta2[3]= 82;

  Theta3[0]= 93;
  Theta3[1]= 106;
  Theta3[2]= 129;
  Theta3[3]= 105;

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

  poser1=0;
  poser2=0;

}




void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()) {
    Serial.println("Enter a Option (q,a <---> w,s)"); 
    val = Serial.read();
    if (val == 'q')  {
    myservo11.write(Theta2[0]++);
    myservo8.write(Theta2[1]++);
    myservo2.write(Theta2[2]++);
    myservo5.write(Theta2[0]+6);
    Serial.println(Theta2[3]);
    
    poser1++;
    }
    if (val == 'w')  {
    myservo12.write(Theta3[0]++);
    myservo9.write(Theta3[1]++);
    myservo3.write(Theta3[2]++);
    myservo6.write(Theta3[3]++); 
    poser2++;
    }
    if (val == 'a')  {
    myservo11.write(Theta2[0]--);
    myservo8.write(Theta2[1]--);
    myservo2.write(Theta2[2]--);
    myservo5.write(Theta2[0]-6);
    poser1--;
    }
    if (val == 's')  {
    myservo12.write(Theta3[0]--);
    myservo9.write(Theta3[1]--);
    myservo3.write(Theta3[2]--);
    myservo6.write(Theta3[3]--);
    poser2--;
    }
      
    Serial.print("Angles:\t");
    Serial.print(poser1);
    Serial.print("    ");
    Serial.println(poser2);
  }
}
