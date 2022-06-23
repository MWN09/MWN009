int MotorL1=7;
int MotorL2=8;
int enableMotorL=9;
int MotorR1=2;
int MotorR2=4;
int enableMotorR=3;
int SensorL=12;
int SensorR=13;

void setup() {
  // put your setup code here, to run once:
pinMode(MotorL1,OUTPUT);
pinMode(MotorL2,OUTPUT);
pinMode(enableMotorL,OUTPUT);
pinMode(MotorR1,OUTPUT);
pinMode(MotorR2,OUTPUT);
pinMode(enableMotorR,OUTPUT);
pinMode(SensorL,INPUT);
pinMode(SensorR,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (SensorR==HIGH && SensorL==HIGH)
straight();
if (SensorR==LOW && SensorL==LOW)
straight();
if (SensorR==LOW && SensorL==HIGH)
turnright();
if (SensorL==LOW && SensorR==HIGH)
turnleft();
}
  void straight(){
    digitalWrite(MotorL1,HIGH);
    digitalWrite(MotorL2,LOW);
    analogWrite(enableMotorL,100);
    digitalWrite(MotorR1,HIGH);
    digitalWrite(MotorR2,LOW);
    analogWrite(enableMotorR,100);
  }
  void turnleft(){
    digitalWrite(MotorL1,HIGH);
    digitalWrite(MotorL2,LOW);
    analogWrite(enableMotorL,0);
    digitalWrite(MotorR1,HIGH);
    digitalWrite(MotorR2,LOW);
    analogWrite(enableMotorR,100);
  }
    void turnright(){
    digitalWrite(MotorL1,HIGH);
    digitalWrite(MotorL2,LOW);
    analogWrite(enableMotorL,100);
    digitalWrite(MotorR1,HIGH);
    digitalWrite(MotorR2,LOW);
    analogWrite(enableMotorR,0);
  }
