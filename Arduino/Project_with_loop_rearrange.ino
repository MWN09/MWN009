
#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11,10, 49, 48,47,46);
#include <Servo.h>


Servo myservo;  // create servo object to control a servo
Servo myservo1;
Servo myservo2;
Servo myservo3;
int potpin = A0;  // analog pin used to connect the potentiometer
int potpin1 = A1;
int potpin2 = A2;
int potpin3 = A3;

void setup()
{
 for(int l=2;l<6;l++)  {
   pinMode(l,OUTPUT);
   digitalWrite(l,LOW);}
myservo.attach(6);  // attaches the servo on pin 9 to the servo object
 myservo1.attach(7);
  myservo2.attach(8);
   myservo3.attach(9);
 pinMode(1,INPUT_PULLUP);
 lcd.begin(2,16);
  lcd.print("Hey Everyone");
 
 
 
                                                 //myservo (motor1)//

  myservo.write(0);
  delay(3000);
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  lcd.print("Set initial M1");
  delay (1000);
  
  
  
  
  int initial;
  
  
  for(int k=0;k<10;k++){
  initial = analogRead(potpin);            
  initial = map(initial,0,1023,0,180); 
  initial = constrain(initial,0,180); 
  myservo.write(initial);
  delay(1000);
  }
  lcd.clear();
  delay(1000);
  lcd.print(initial);
  delay(5000);
  
  
 
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  
  
  
    lcd.clear();
  delay(1000);
  lcd.print("Set initial M2");
  delay (1000);
  
  myservo1.write(90);
  delay(3000);
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  
  
  
  int initial1;
 
  
  for(int k=0;k<10;k++){
  initial1 = analogRead(potpin1);            
  initial1 = map(initial1,0,1023,0,180); 
  initial1 = constrain(initial1,0,180); 
  myservo1.write(initial1);
  delay(1000);
  }
  lcd.clear();
  delay(1000);
  lcd.print(initial1);
  delay(5000);
  
  
  
  
 
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);


  
  lcd.clear();
  delay(1000);
  lcd.print("Set initial M3");
  delay (1000);
  
  myservo2.write(0);
  delay(3000);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  
  
  
  int initial2;
  
  
  for(int k=0;k<10;k++){
  initial2 = analogRead(potpin2);            
  initial2 = map(initial2,0,1023,0,180); 
  initial2 = constrain(initial2,0,180); 
  myservo2.write(initial2);
  delay(1000);
  }
  
  lcd.clear();
  delay(1000);
  lcd.print(initial2);
  delay(5000);
  
 
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
   
  
  
 lcd.clear();
 delay(1000);
 lcd.print("Set initial M4");
 delay (1000);
 
  
   myservo3.write(0);
  delay(3000);
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  
  
  
  int initial3;
  
  
  for(int k=0;k<10;k++){
  initial3 = analogRead(potpin3);            
  initial3 = map(initial3,0,1023,100,180); 
  initial3 = constrain(initial3,100,180); 
  myservo3.write(initial3);
  delay(1000);
  }
  
  lcd.clear();
  delay(1000);
  lcd.print(initial3);
  delay(5000);
  
  
  
 
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);
  
 //Intermediate//
 
 
                                                                               //myservo3 (motor4)//
                                                                              
 digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
 
 lcd.clear();
 delay(1000);
 lcd.print("Set Inter value M4");
 delay (1000); 
 
  int INT3;
  for(int h=0;h<10;h++){
  INT3 = analogRead(potpin3);            
  INT3 = map(INT3,0,1023,100,180); 
  INT3 = constrain(INT3,100,180); 
  myservo3.write(INT3);
  delay(1000);
  }
  
  
  
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  lcd.clear();
  delay(1000);
  lcd.print(INT3);
  delay(5000);
  
  



                                                                                    //myservo2 (motor3)//
digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);                                                                                    

  lcd.clear();
 delay(1000);
 lcd.print("Set Inter value M3");
 delay (1000);
  
  
  int INT2;
  for(int h=0;h<10;h++){
  INT2 = analogRead(potpin2);            
  INT2 = map(INT2,0,1023,0,180); 
  INT2 = constrain(INT2,0,180); 
  myservo2.write(INT2);
  delay(1000);
  }
  
  
  
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  lcd.clear();
  delay(1000);
  lcd.print(INT2);
  delay(5000);


                                                              //myservo1 (motor2)//
digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);

 lcd.clear();
 delay(1000);
 lcd.print("Set Inter value M2");
 delay (1000);
  int INT01;
  for(int h=0;h<10;h++){
  INT01 = analogRead(potpin1);            
  INT01 = map(INT01,0,1023,0,180); 
  INT01 = constrain(INT01,0,180); 
  myservo1.write(INT01);
  delay(1000);
  }
  
  
  
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  
  lcd.clear();
  delay(1000);
  lcd.print(INT01);
  delay(5000);
              
                                                              //myservo (motor1)//
 
 digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
 
  lcd.clear();
 delay(1000);
 lcd.print("Set Inter value M1");
 delay (1000);
  
  int INT;
  for(int h=0;h<10;h++){
  INT = analogRead(potpin);            
  INT = map(INT,0,1023,0,180); 
  INT = constrain(INT,0,180); 
  myservo.write(INT);
  delay(1000);
  }
  
  
  
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  
  
  lcd.clear();
  delay(1000);
  lcd.print(INT);
  delay(5000);
  
  

  
   

  
  
  
  
  
  
  //Finals//
        //myservo (motor1)//
 digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
   
   lcd.clear();
 delay(1000);
 lcd.print("Set Inter value M1");
 delay (1000);
  
  int final;
  for(int h=0;h<10;h++){
  final = analogRead(potpin);            
  final = map(final,0,1023,0,180); 
  final = constrain(final,0,180); 
  myservo.write(final);
  delay(1000);
  }
  
  
  
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  
  lcd.clear();
  delay(1000);
  lcd.print(final);
  delay(5000);
  
  
                                                                //myservo1 (motor2)//

digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  
  
  lcd.clear();
 delay(1000);
 lcd.print("Set Inter value M2");
 delay (1000);
  
  int final1;
  for(int h=0;h<10;h++){
  final1 = analogRead(potpin1);            
  final1 = map(final1,0,1023,0,180); 
  final1 = constrain(final1,0,180); 
  myservo1.write(final1);
  delay(1000);
  }
  
  
  
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  
  lcd.clear();
  delay(1000);
  lcd.print(final1);
  delay(5000);
  

                                                                                    //myservo2 (motor3)//
 digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);  
                                                                                    
 lcd.clear();
 delay(1000);
 lcd.print("Set Inter value M3");
 delay (1000);
  
  int final2;
  for(int h=0;h<10;h++){
  final2 = analogRead(potpin2);            
  final2 = map(final2,0,1023,0,180); 
  final2 = constrain(final2,0,180); 
  myservo2.write(final2);
  delay(1000);
  }
  
  
  
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  
  lcd.clear();
  delay(1000);
  lcd.print(final2);
  delay(5000);
  
                                                                              //myservo3 (motor4)//
   digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  
  lcd.clear();
 delay(1000);
 lcd.print("Set Inter value M4");
 delay (1000);
    
  int final3;
  for(int h=0;h<10;h++){
  final3 = analogRead(potpin3);            
  final3 = map(final3,0,1023,100,180); 
  final3 = constrain(final3,100,180); 
  myservo3.write(final3);
  delay(1000);
  }
  
  
  
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);




lcd.clear();
  delay(1000);
  lcd.print(final3);
  delay(5000);
                                                   
  

  
  if(1==HIGH){
  
  
                                                                        //LOOP 10 TIMES for Motor1//
  
   lcd.clear();
 delay(1000);
 lcd.print("M1 Initial value");
 delay (1000);
 
  for(int i=0;i<10;i++){
     digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
    myservo.write(initial);
    delay(1000);
    
    lcd.clear();
  delay(1000);
  lcd.print(initial);
  delay(5000);
    
    lcd.clear();
 delay(1000);
 lcd.print("M2 Initial value");
 delay (1000);
 
     digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
   myservo1.write(initial1);
    delay(1000);
    
     lcd.clear();
  delay(1000);
  lcd.print(initial1);
  delay(5000);
    
     lcd.clear();
 delay(1000);
 lcd.print("M3 Initial value");
 delay (1000);
    
     digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
     myservo2.write(initial2);
    delay(1000);
    
  lcd.clear();
  delay(1000);
  lcd.print(initial2);
  delay(5000);
    
 lcd.clear();
 delay(1000);
 lcd.print("M4 Initial value");
 delay (1000);
     
     digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
    myservo3.write(initial3);
    delay(1000);
   
     lcd.clear();
  delay(1000);
  lcd.print(initial3);
  delay(5000);
    
   
   
   //intermediate//
   
    lcd.clear();
 delay(1000);
 lcd.print("M4 Inter value");
 delay (1000);
   
   digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
   myservo3.write(INT3);
  delay(1000);
  
   lcd.clear();
  delay(1000);
  lcd.print(INT3);
  delay(5000);
  
 
   lcd.clear();
 delay(1000);
 lcd.print("M3 Inter value");
 delay (1000);
 
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  myservo2.write(INT2);
  delay(1000);
  
  lcd.clear();
  delay(1000);
  lcd.print(INT2);
  delay(5000);
  
   
    lcd.clear();
 delay(1000);
 lcd.print("M2 Inter value");
 delay (1000);
   
   digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
   myservo1.write(INT01);
  delay(1000);
  
   lcd.clear();
  delay(1000);
  lcd.print(INT01);
  delay(5000);
   
 lcd.clear();
 delay(1000);
 lcd.print("M1 Inter value");
 delay (1000);
   
   digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  myservo.write(INT);
  delay(1000);
  
  lcd.clear();
  delay(1000);
  lcd.print(INT);
  delay(5000);
  
           
           //Finals//
           
 lcd.clear();
 delay(1000);
 lcd.print("M1 final value");
 delay (1000);
           
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  myservo.write(final);
  delay(1000);
  
  lcd.clear();
  delay(1000);
  lcd.print(final);
  delay(5000);
  
  lcd.clear();
 delay(1000);
 lcd.print("M2 final value");
 delay (1000);
  
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
   myservo1.write(final1);
  delay(1000);
  
  lcd.clear();
  delay(1000);
  lcd.print(final1);
  delay(5000);
  
 lcd.clear();
 delay(1000);
 lcd.print("M3 final value");
 delay (1000);
  
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  myservo2.write(final2);
  delay(1000);
  
  lcd.clear();
  delay(1000);
  lcd.print(final2);
  delay(5000);
  
  lcd.clear();
 delay(1000);
 lcd.print("M4 final value");
 delay (1000);
  
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
   myservo3.write(final3);
  delay(1000);
  
  lcd.clear();
  delay(1000);
  lcd.print(final3);
  delay(5000);
  }
  
  
  }

}


void loop() 
{ 
  
}

 
