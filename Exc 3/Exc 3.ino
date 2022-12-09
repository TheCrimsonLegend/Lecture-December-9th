#include <Zumo32U4.h>;
#include <Wire.h>;
#include <Zumo32U4Motors.h>;
#include <Math.h>;

int LED = 13;
int randNumber = 0;

void setup() 
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode(LED,OUTPUT);
}

void loop() 
{
  randNumber = random(200, 1001);
  Serial.println("Blinkig period = "+ (int)randNumber);
  digitalWrite(LED,HIGH);
  delay(randNumber);
  digitalWrite(LED,LOW);
  delay(randNumber);
}
