#include <Servo.h>
Servo myservo;
int pos = 0;    
boolean fire = false;
#define Left 8      // left sensor
#define Right 10    // right sensor
#define Forward 9   //front sensor
#define LM1 2       // left motor
#define LM2 3       // left motor
#define RM1 4       // right motor
#define RM2 5       // right motor
#define pump 6
void setup()
{
  pinMode(Left, INPUT);
  pinMode(Right, INPUT);
  pinMode(Forward, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  pinMode(pump, OUTPUT);
  digitalWrite(pump, HIGH);
  myservo.attach(11);
  myservo.write(90); 
}
void put_off_fire()
{
    delay (500);
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, HIGH);
    digitalWrite(pump, LOW);
    delay(500);
    for (pos = 50; pos <= 130; pos += 1) 
    { 
     myservo.write(pos); 
     delay(10);  
    }
    for (pos = 130; pos >= 50; pos -= 1) 
    { 
     myservo.write(pos); 
     delay(10);
    }
    digitalWrite(pump,HIGH);
    myservo.write(90);
    fire=false;
} 
void loop()
{
   myservo.write(90); //making a free sweep for servo  
    if (digitalRead(Left) ==1 && digitalRead(Right)==1 && digitalRead(Forward) ==1) 
    {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, HIGH);
    }
    else if (digitalRead(Forward) ==0) 
    {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    fire = true;
    }
    else if (digitalRead(Left) ==0)
    {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, HIGH);
    }
    else if (digitalRead(Right) ==0) 
    {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    }
delay(300);//use this value to stop robot before fire accordingly
     while (fire == true)
     {
      put_off_fire();
     }
}
