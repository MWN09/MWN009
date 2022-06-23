
const int motorA1  = 3;
const int motorA2  = 4;
const int motorA   = 5;
const int motorB   = 6;
const int motorB1  = 8;
const int motorB2  = 7;
const int movedelay = 1500;
const int turndelay = 500;

int vSpeed = 0;
int m=0;
const int numReadings = 150;

int readings[numReadings];      // the readings from the analog input
int readIndex = 0;              // the index of the current reading
int total = 0;                  // the running total
int average = 0; 

String readString;
String prreadString;

void setup()
{
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(2, OUTPUT);

    Serial.begin(9600);
  for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
}

void loop()
{

  digitalWrite(13, HIGH);
  digitalWrite(2, HIGH);

  while (Serial.available()) {

    delay(10);  //small delay to allow input buffer to fill

    char c = Serial.read();  //gets one byte from serial buffer

    if (c == ',') {
      break;
    }  //breaks out of capture loop to print readstring
    readString += c;
  } //makes the string readString


  if (readString.length() > 0)
  {

    if (readString != prreadString)
     Serial.println(readString);
if (readString=="move")
   {
     readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<75){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 75;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
      digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
      digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
      analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
}


      delay(movedelay);

      digitalWrite(motorA1, LOW); digitalWrite(motorA2, LOW);
      digitalWrite(motorB1, LOW); digitalWrite(motorB2, LOW);
      analogWrite(motorA, 0); analogWrite(motorB, 0);
    }

 else if (readString == "idhar aao") {
readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<75){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 75;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
  
      digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
      digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
      analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
}

      delay(movedelay);

      digitalWrite(motorA1, LOW); digitalWrite(motorA2, LOW);
      digitalWrite(motorB1, LOW); digitalWrite(motorB2, LOW);
      analogWrite(motorA, 0); analogWrite(motorB, 0);
    }

  else if (readString == "aage badho") {
      readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<75){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 75;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
      digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
      digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
      analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
}

      delay(movedelay);

      digitalWrite(motorA1, LOW); digitalWrite(motorA2, LOW);
      digitalWrite(motorB1, LOW); digitalWrite(motorB2, LOW);
      analogWrite(motorA, 0); analogWrite(motorB, 0);
    }

    else if (readString == "back") {
      readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<75){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 75;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
      digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
      digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
      analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
}

      delay(movedelay);

      digitalWrite(motorA1, LOW); digitalWrite(motorA2, LOW);
      digitalWrite(motorB1, LOW); digitalWrite(motorB2, LOW);
      analogWrite(motorA, 0); analogWrite(motorB, 0);
    }


 else if (readString == "Wapas jao") {
      readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<75){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 75;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
      digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
      digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
      analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
}

      delay(movedelay);

      digitalWrite(motorA1, LOW); digitalWrite(motorA2, LOW);
      digitalWrite(motorB1, LOW); digitalWrite(motorB2, LOW);
      analogWrite(motorA, 0); analogWrite(motorB, 0);
    }

    else if (readString == "left") {
      readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<75){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 75;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
      digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
      digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
      analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
}

      delay(turndelay);

      digitalWrite(motorA1, LOW); digitalWrite(motorA2, LOW);
      digitalWrite(motorB1, LOW); digitalWrite(motorB2, LOW);
      analogWrite(motorA, 0); analogWrite(motorB, 0);
    }

     else if (readString == "right") {
readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<75){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 75;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);

      digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
      digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
      analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
}


      delay(turndelay);

      digitalWrite(motorA1, LOW); digitalWrite(motorA2, LOW);
      digitalWrite(motorB1, LOW); digitalWrite(motorB2, LOW);
      analogWrite(motorA, 0); analogWrite(motorB, 0);
      Serial.println("Apply If condition");
    }

 else if (readString == "1"){
m=1;
Serial.println(m);
}
else if (readString == "2"){
m=2;
Serial.println(m);
}
else if (readString == "3"){
m=3;
Serial.println(m);
}
else if (readString == "4"){
m=4;
Serial.println(m);
}  
else if (readString == "5"){
m=5;
Serial.println(m);
}







   
    /////////////////////////////////Speed1////////////////////////

    //If readString is equal with letter "F", car will go forward!


if (m==1){
    
   if((readString == "F")&&(readString != "R")&&(readString != "L")&&(readString != "B")&&(readString != "S"))  {
        Serial.println("MOVE FORWARD");
        
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<40){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 40;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      
    }
      //If readString is equal with letter "G", car will go forward left
       else if (readString == "G") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<75){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 75;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, 15 );
        //////////////////////CHANGED///////////////////////
      }
      
      }

      //If readString is equal with letter "I", car will go forward right
     else if (readString == "I") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<75){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 75;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, 15); analogWrite(motorB, vSpeed);
        //////////////////////CHANGED///////////////////////
      }
      
      }
      //If readString is equal with letter "B", car will go backward
  else if ((readString == "B")&&(readString != "R")&&(readString != "L")&&(readString != "F")&&(readString != "S"))     {
        Serial.println("MOVE BACKWARD");
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<40){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 40;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      
      }
      
      //If readString is equal with letter "H", car will go backward left
    else if (readString == "H") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<75){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 75;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, 15); analogWrite(motorB, vSpeed);
        //////////////////////CHANGED///////////////////////
      }
      
      }

      //If readString is equal with letter "J", car will go backward right
    else if (readString == "J") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<75){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 75;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, 15); analogWrite(motorB, vSpeed);
        //////////////////////CHANGED///////////////////////
      }
    
      }

      //If readString is equal with letter "L", wheels will turn left
     else if ((readString == "L")&&(readString != "R")&&(readString != "F")&&(readString != "B")&&(readString != "S"))  {
        Serial.println("MOVE LEFT");
       
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<40){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 40;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      
      }

      //If readString is equal with letter "R", wheels will turn right
else if ((readString == "R")&&(readString != "F")&&(readString != "L")&&(readString != "B")&&(readString != "S"))     {
        Serial.println("MOVE RIGHT");
        
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<40){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 40;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      
      }
         else if ((readString=="S")||(readString=="FS")||(readString=="SF")||(readString=="BS")||(readString=="SB")||(readString=="LS")||(readString=="SL")||(readString=="LB")||(readString=="BL")||(readString=="LF")||(readString=="FL")||(readString=="LI")||(readString=="IL")||(readString=="LJ")||(readString=="JL")||(readString=="LH")||(readString=="HL")||(readString=="LG")||(readString=="GL")
    ||(readString=="RS")||(readString=="SR")||(readString=="RB")||(readString=="BR")||(readString=="RF")||(readString=="FR")||(readString=="RI")||(readString=="IR")||(readString=="RJ")||(readString=="JR")||(readString=="RH")||(readString=="HR")||(readString=="RG")||(readString=="GR")
    ||(readString=="FI")||(readString=="IF")||(readString=="GF")||(readString=="FG")||(readString=="BH")||(readString=="HB")||(readString=="JB")||(readString=="BJ"))   {
        Serial.println("STOPPED");
        
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, LOW);
        
      }
}




    


/////////////////////////////////Speed2////////////////////////////////////////////////


if (m==2){
    //If readString is equal with letter "F", car will go forward!
    
    if ((readString == "F")&&(readString != "R")&&(readString != "L")&&(readString != "B")&&(readString != "S"))   {
        Serial.println("MOVE FORWARD");
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<60){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 60;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }
      //If readString is equal with letter "G", car will go forward left
     else if (readString == "G"){
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<95){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 95;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, 35 );
        //////////////////////CHANGED///////////////////////
      }
      }

      //If readString is equal with letter "I", car will go forward right
     else if (readString == "I") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<95){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 95;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, 35); analogWrite(motorB, vSpeed);
        //////////////////////CHANGED///////////////////////
      }
      }
      //If readString is equal with letter "B", car will go backward
    else if ((readString == "B")&&(readString != "R")&&(readString != "L")&&(readString != "F")&&(readString != "S"))  {
        Serial.println("MOVE BACKWARD");
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<60){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 60;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }
      
      //If readString is equal with letter "H", car will go backward left
 else if (readString == "H")      {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<95){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 95;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, 35);
        //////////////////////CHANGED///////////////////////
      }
      }

      //If readString is equal with letter "J", car will go backward right
     else if (readString == "J") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<95){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 95;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, 35); analogWrite(motorB, vSpeed);
        //////////////////////CHANGED///////////////////////
      }
      }

      //If readString is equal with letter "L", wheels will turn left
    else if ((readString == "L")&&(readString != "R")&&(readString != "F")&&(readString != "B")&&(readString != "S")) {
        Serial.println("MOVE LEFT");
        
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<60){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 60;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }

      //If readString is equal with letter "R", wheels will turn right
else if ((readString == "R")&&(readString != "F")&&(readString != "L")&&(readString != "B")&&(readString != "S"))  {
        Serial.println("MOVE RIGHT");
        
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<60){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 60;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }
       else if ((readString=="S")||(readString=="LS")||(readString=="SL")||(readString=="LB")||(readString=="BL")||(readString=="LF")||(readString=="FL")||(readString=="LI")||(readString=="IL")||(readString=="LJ")||(readString=="JL")||(readString=="LH")||(readString=="HL")||(readString=="LG")||(readString=="GL")
    ||(readString=="RS")||(readString=="SR")||(readString=="RB")||(readString=="BR")||(readString=="RF")||(readString=="FR")||(readString=="RI")||(readString=="IR")||(readString=="RJ")||(readString=="JR")||(readString=="RH")||(readString=="HR")||(readString=="RG")||(readString=="GR")
    ||(readString=="FI")||(readString=="IF")||(readString=="GF")||(readString=="FG")||(readString=="BH")||(readString=="HB")||(readString=="JB")||(readString=="BJ"))  {
        Serial.println("STOPPED");
        
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, LOW);
      }

}


 
//////////////////////Speed3//////////////////////////

if (m==3){
    //If readString is equal with letter "F", car will go forward!
    
    
 if ((readString == "F")&&(readString != "R")&&(readString != "L")&&(readString != "B")&&(readString != "S"))     {
        Serial.println("MOVE FORWARD");
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<90){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 90;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }
      //If readString is equal with letter "G", car will go forward left
 else if (readString == "G") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<125){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 125;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, 65 );
        //////////////////////CHANGED///////////////////////
      }
      }

      //If readString is equal with letter "I", car will go forward right
     else if (readString == "I") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<125){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 125;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, 65); analogWrite(motorB, vSpeed);
        //////////////////////CHANGED///////////////////////
      }
      }
      //If readString is equal with letter "B", car will go backward
     else if ((readString == "B")&&(readString != "R")&&(readString != "L")&&(readString != "F")&&(readString != "S")) {
        Serial.println("MOVE BACKWARD");
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<90){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 90;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }
      
      //If readString is equal with letter "H", car will go backward left
      else if (readString == "H") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<125){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 125;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, 65);
        //////////////////////CHANGED///////////////////////
      }
      }

      //If readString is equal with letter "J", car will go backward right
      else if (readString == "J"){
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<125){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 125;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, 65); analogWrite(motorB, vSpeed);
        //////////////////////CHANGED///////////////////////
      }
      }

      //If readString is equal with letter "L", wheels will turn left
  else if ((readString == "L")&&(readString != "R")&&(readString != "F")&&(readString != "B")&&(readString != "S"))     {
        Serial.println("MOVE LEFT");
        
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<90){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 90;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }

      //If readString is equal with letter "R", wheels will turn right
else if ((readString == "R")&&(readString != "F")&&(readString != "L")&&(readString != "B")&&(readString != "S")) {
        Serial.println("MOVE RIGHT");
        
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<90){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 90;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }

          else if ((readString=="S")||(readString=="LS")||(readString=="SL")||(readString=="LB")||(readString=="BL")||(readString=="LF")||(readString=="FL")||(readString=="LI")||(readString=="IL")||(readString=="LJ")||(readString=="JL")||(readString=="LH")||(readString=="HL")||(readString=="LG")||(readString=="GL")
    ||(readString=="RS")||(readString=="SR")||(readString=="RB")||(readString=="BR")||(readString=="RF")||(readString=="FR")||(readString=="RI")||(readString=="IR")||(readString=="RJ")||(readString=="JR")||(readString=="RH")||(readString=="HR")||(readString=="RG")||(readString=="GR")
    ||(readString=="FI")||(readString=="IF")||(readString=="GF")||(readString=="FG")||(readString=="BH")||(readString=="HB")||(readString=="JB")||(readString=="BJ"))    {
        Serial.println("STOPPED");
        
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, LOW);
      }
   
}    

















///////////////////////////////Speed4///////////////////////////////////////////////

if (m==4){
    //If readString is equal with letter "F", car will go forward!
    
    
   if ((readString == "F")&&(readString != "R")&&(readString != "L")&&(readString != "B")&&(readString != "S"))   {
        Serial.println("MOVE FORWARD");
        
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<120){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 120;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }
      //If readString is equal with letter "G", car will go forward left
     else if (readString == "G") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<155){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 155;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, 95 );
        //////////////////////CHANGED///////////////////////
      }
      }

      //If readString is equal with letter "I", car will go forward right
   else if (readString == "I") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<155){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 155;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, 95); analogWrite(motorB, vSpeed);
        //////////////////////CHANGED///////////////////////
      }
      }
      //If readString is equal with letter "B", car will go backward
else if ((readString == "B")&&(readString != "R")&&(readString != "L")&&(readString != "F")&&(readString != "S"))     {
        Serial.println("MOVE BACKWARD");
      
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<120){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 120;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }
      
      //If readString is equal with letter "H", car will go backward left
     else if (readString == "H") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<155){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 155;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, 95);
        //////////////////////CHANGED///////////////////////
      }
      }

      //If readString is equal with letter "J", car will go backward right
      else if (readString == "J") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<155){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 155;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, 95); analogWrite(motorB, vSpeed);
        //////////////////////CHANGED///////////////////////
      }
      }

      //If readString is equal with letter "L", wheels will turn left
 else if ((readString == "L")&&(readString != "R")&&(readString != "F")&&(readString != "B")&&(readString != "S"))    {
        Serial.println("MOVE LEFT");
        
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<120){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 120;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }

      //If readString is equal with letter "R", wheels will turn right
 else if ((readString == "R")&&(readString != "F")&&(readString != "L")&&(readString != "B")&&(readString != "S"))  {
        Serial.println("MOVE RIGHT");
        
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<120){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 120;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }
       else if ((readString=="S")||(readString=="LS")||(readString=="SL")||(readString=="LB")||(readString=="BL")||(readString=="LF")||(readString=="FL")||(readString=="LI")||(readString=="IL")||(readString=="LJ")||(readString=="JL")||(readString=="LH")||(readString=="HL")||(readString=="LG")||(readString=="GL")
    ||(readString=="RS")||(readString=="SR")||(readString=="RB")||(readString=="BR")||(readString=="RF")||(readString=="FR")||(readString=="RI")||(readString=="IR")||(readString=="RJ")||(readString=="JR")||(readString=="RH")||(readString=="HR")||(readString=="RG")||(readString=="GR")
    ||(readString=="FI")||(readString=="IF")||(readString=="GF")||(readString=="FG")||(readString=="BH")||(readString=="HB")||(readString=="JB")||(readString=="BJ")) {
        Serial.println("STOPPED");
        
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, LOW);
      }

}   






/////////////////////////////////////////Speed5///////////////////////////////////

if (m==5){


    //If readString is equal with letter "F", car will go forward!
    
    
if ((readString == "F")&&(readString != "R")&&(readString != "L")&&(readString != "B")&&(readString != "S")) {
        Serial.println("MOVE FORWARD");
       
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<150){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 150;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }
      //If readString is equal with letter "G", car will go forward left
      else if (readString == "G"){
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<185){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 185;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, 125 );
        //////////////////////CHANGED///////////////////////
      }
      }

      //If readString is equal with letter "I", car will go forward right
     else if (readString == "I") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<185){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 185;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, 125); analogWrite(motorB, vSpeed);
        //////////////////////CHANGED///////////////////////
      }
      }
      //If readString is equal with letter "B", car will go backward
    else if ((readString == "B")&&(readString != "R")&&(readString != "L")&&(readString != "F")&&(readString != "S"))   {
        Serial.println("MOVE BACKWARD");
       
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<150){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 150;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }
      
      //If readString is equal with letter "H", car will go backward left
     else if (readString == "H"){
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<185){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 185;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, 125);
        //////////////////////CHANGED///////////////////////
      }
      }

      //If readString is equal with letter "J", car will go backward right
     else if (readString == "J") {
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<185){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 185;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, 125); analogWrite(motorB, vSpeed);
        //////////////////////CHANGED///////////////////////
      }
      }

      //If readString is equal with letter "L", wheels will turn left
     else if ((readString == "L")&&(readString != "R")&&(readString != "F")&&(readString != "B")&&(readString != "S"))  {
        Serial.println("MOVE LEFT");
       
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<150){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 150;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH);
        digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }

      //If readString is equal with letter "R", wheels will turn right
    else if ((readString == "R")&&(readString != "F")&&(readString != "L")&&(readString != "B")&&(readString != "S")) {
        Serial.println("MOVE RIGHT");
       
        readings[numReadings];      // the readings from the analog input
readIndex = 0;              // the index of the current reading
total = 0;                  // the running total
average = 0; 
 for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
while(average<150){
  average=0;
  // subtract the last reading:
  total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = 150;
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
 
vSpeed=average;
 
  delay(1);        // delay in between reads for stability
  Serial.println(average);
        digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH);
        analogWrite(motorA, vSpeed); analogWrite(motorB, vSpeed);
      }
      }


      //If readString is equal with letter "S", stop the car
    else if ((readString=="S")||(readString=="LS")||(readString=="SL")||(readString=="LB")||(readString=="BL")||(readString=="LF")||(readString=="FL")||(readString=="LI")||(readString=="IL")||(readString=="LJ")||(readString=="JL")||(readString=="LH")||(readString=="HL")||(readString=="LG")||(readString=="GL")
    ||(readString=="RS")||(readString=="SR")||(readString=="RB")||(readString=="BR")||(readString=="RF")||(readString=="FR")||(readString=="RI")||(readString=="IR")||(readString=="RJ")||(readString=="JR")||(readString=="RH")||(readString=="HR")||(readString=="RG")||(readString=="GR")
    ||(readString=="FI")||(readString=="IF")||(readString=="GF")||(readString=="FG")||(readString=="BH")||(readString=="HB")||(readString=="JB")||(readString=="BJ")){
        Serial.println("STOPPED");
        
        digitalWrite(motorA1, LOW); digitalWrite(motorA2, LOW);
        digitalWrite(motorB1, LOW); digitalWrite(motorB2, LOW);
      }
}

  
    

    else if (readString == "X") {
      digitalWrite(9, HIGH);
      //Serial.println("POWER ON");
    }
    else if (readString == "x") {
      digitalWrite(9, LOW);
      //Serial.println("POWER OFFm");
    }             
















    

    prreadString = readString;
    readString = "";

  }
}









