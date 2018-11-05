//www.elegoo.com
//2016.12.12
int motorPin=3;
int buttonpin=12;
int led1=5;
int led2=6;
int led3=11;


int latch=9;  //74HC595  pin 9 STCP
int clock=10; //74HC595  pin 10 SHCP
int data=8;   //74HC595  pin 8 DS

unsigned char table[]=
{0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c
,0x39,0x5e,0x79,0x71,0x00};

void setup() {
  pinMode(latch,OUTPUT);
  pinMode(clock,OUTPUT);
  pinMode(data,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(buttonpin,INPUT);
  Serial.begin(9600);
}
void Display(unsigned char num)
{

  digitalWrite(latch,LOW);
  shiftOut(data,clock,MSBFIRST,table[num]);
  digitalWrite(latch,HIGH);
  
}
void loop() {
  int x=0;
   Serial.println(x);
  Display(10);
  delay(1000);
  if (digitalRead(buttonpin) == HIGH){
    x=1;
  }
   Serial.println(x);
   Serial.println(digitalRead(buttonpin));
  Display(9);
  delay(1000);
  if (digitalRead(buttonpin) == LOW){
    x=1;
  }
  Display(8);
  delay(1000);
  if (digitalRead(buttonpin) == LOW){
    x=1;
  }
  Display(7);
  delay(1000);
  if (digitalRead(buttonpin) == LOW){
    x=1;
  }
  Display(6);
  delay(1000);
  if (digitalRead(buttonpin) == LOW){
    x=1;
  }
  Display(5);
  delay(1000);
  if (digitalRead(buttonpin) == LOW){
    x=1;
  }
  Display(4);
  delay(1000);
  if (digitalRead(buttonpin) == LOW){
    x=1;
  }
  Display(3);
  delay(1000);
  if (digitalRead(buttonpin) == LOW){
    x=1;
  }
  Display(2);
  delay(1000);
  if (digitalRead(buttonpin) == LOW){
    x=1;
  }
  Display(1);
  delay(1000);
  if (digitalRead(buttonpin) == LOW){
    x=1;
  }
  Serial.println(x);
     digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led2,HIGH);
    delay(50);
    digitalWrite(led1,LOW);
    delay(50);
    digitalWrite(led3,HIGH);
    delay(100);
    digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led3,LOW);
    delay(50);
    digitalWrite(led2,LOW);
    delay(50);
    digitalWrite(led3,HIGH);
    delay(50);
    digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led2,HIGH);
    delay(50);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
       digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led2,HIGH);
    delay(50);
    digitalWrite(led1,LOW);
    delay(50);
    digitalWrite(led3,HIGH);
    delay(50);
    digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led3,LOW);
    delay(50);
    digitalWrite(led2,LOW);
    delay(50);
    digitalWrite(led3,HIGH);
    delay(50);
    digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led2,HIGH);
    delay(50);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
       digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led2,HIGH);
    delay(50);
    digitalWrite(led1,LOW);
    delay(100);
    digitalWrite(led3,HIGH);
    delay(100);
    digitalWrite(led1,HIGH);
    delay(100);
    digitalWrite(led3,LOW);
    delay(100);
    digitalWrite(led2,LOW);
    delay(100);
    digitalWrite(led3,HIGH);
    delay(100);
    digitalWrite(led1,HIGH);
    delay(200);
    digitalWrite(led2,HIGH);
    delay(200);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led2,HIGH);
    delay(50);
    digitalWrite(led1,LOW);
    delay(50);
    digitalWrite(led3,HIGH);
    delay(100);
    digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led3,LOW);
    delay(50);
    digitalWrite(led2,LOW);
    delay(50);
    digitalWrite(led3,HIGH);
    delay(50);
    digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led2,HIGH);
    delay(50);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
       digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led2,HIGH);
    delay(50);
    digitalWrite(led1,LOW);
    delay(50);
    digitalWrite(led3,HIGH);
    delay(50);
    digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led3,LOW);
    delay(50);
    digitalWrite(led2,LOW);
    delay(50);
    digitalWrite(led3,HIGH);
    delay(50);
    digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led2,HIGH);
    delay(50);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
       digitalWrite(led1,HIGH);
    delay(50);
    digitalWrite(led2,HIGH);
    delay(50);
    digitalWrite(led1,LOW);
    delay(100);
    digitalWrite(led3,HIGH);
    delay(100);
    digitalWrite(led1,HIGH);
    delay(100);
    digitalWrite(led3,LOW);
    delay(100);
    digitalWrite(led2,LOW);
    delay(100);
    digitalWrite(led3,HIGH);
    delay(100);
    digitalWrite(led1,HIGH);
    delay(200);
    digitalWrite(led2,HIGH);
    delay(200);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    delay(1000);
    digitalWrite(motorPin,HIGH);
    delay(5000);
    digitalWrite(motorPin,LOW);
    delay(1000);
 Serial.println("");
 }





