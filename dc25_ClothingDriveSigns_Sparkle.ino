/**************************************************** *
 * * * * * * * * DEF CON 25 - Charity Signs * * * * * *
 * ************************************************** *
 * Date: 7/26/2017
 * Author: @drkR4bbit
 * Description: This is the code that powers the 
 */

//Designed for Arduino MEGA
//Sensor Settings
int motionSensor = A0;
int motionSensed = 0;

//Main LED's that flash the arrows
int mLed1 = 2;
int mLed2 = 3;

//Donation LED's (Triggers only when a donation is made)  
int dLed1 = 5;
int dLed2 = 6;

//Sparkler LED's (Triggers only when a donation is made)
int sLed0 = 7;
int sLed1 = 8;
int sLed2 = 9;
int sLed3 = 10;

void setup() {
  // put your setup code here, to run once:
  //Establish main flasher
  pinMode(mLed1,OUTPUT);
  pinMode(mLed2,OUTPUT);

  //Establish Las Vegas flasher
  pinMode(dLed1,OUTPUT);
  pinMode(dLed2,OUTPUT);

  //Establish Sparkle Flasher
  pinMode(sLed3,OUTPUT);
  pinMode(sLed2,OUTPUT);
  pinMode(sLed1,OUTPUT);
  pinMode(sLed0,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  motionSensed = analogRead(motionSensor);

  if (motionSensed != 0)
  {
    //If motion is sensed
//If motion is sensed
    digitalWrite(dLed1, HIGH);
    digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed1, LOW);
    digitalWrite(dLed2, HIGH);
    digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed2, LOW);
    digitalWrite(dLed1, HIGH);
    digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed1, LOW);
    digitalWrite(dLed2, HIGH);
    digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed2, LOW);
    digitalWrite(dLed1, HIGH);
    delay(250);
    digitalWrite(dLed1, LOW);
    digitalWrite(dLed2, HIGH);
    digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed2, LOW);
    digitalWrite(dLed1, HIGH);
    digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed1, LOW);
    digitalWrite(dLed2, HIGH);
    digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed2, LOW);
    digitalWrite(dLed1, HIGH);
     digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed1, LOW);
    digitalWrite(dLed2, HIGH);
    digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed2, LOW);
    digitalWrite(dLed1, HIGH);
    digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed1, LOW);
    digitalWrite(dLed2, HIGH);
      digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed2, LOW);
    digitalWrite(dLed1, HIGH);
    digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed1, LOW);
    digitalWrite(dLed2, HIGH);
    digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed2, LOW);
    digitalWrite(dLed1, HIGH);
    digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed1, LOW);
    digitalWrite(dLed2, HIGH);
    digitalWrite(sLed0, HIGH);
    delay(50);
    digitalWrite(sLed0,LOW);
    digitalWrite(sLed1,HIGH);
    delay(50);
    digitalWrite(sLed1,LOW);
    digitalWrite(sLed2,HIGH);
    delay(50);
    digitalWrite(sLed2,LOW);
    digitalWrite(sLed3,HIGH);
    delay(50);
    digitalWrite(sLed3,LOW);
    delay(50);
    digitalWrite(dLed2, LOW);

    motionSensed = 0;
  }
  else
  {
    digitalWrite(mLed1, HIGH);
    delay(500);
    digitalWrite(mLed1, LOW);
    digitalWrite(mLed2, HIGH);
    delay(500);
    digitalWrite(mLed2, LOW);
    motionSensed = 0;  
  }

}
