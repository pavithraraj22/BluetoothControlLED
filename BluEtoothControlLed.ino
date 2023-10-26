#include <SoftwareSerial.h>

String value;

int TxD = 11;

int RxD = 10;

int servoposition;

SoftwareSerial bluetooth(TxD, RxD);
int keyboard;


void setup() {

  pinMode(2, OUTPUT);

 digitalWrite(2,LOW);
  Serial.begin(9600);      

  bluetooth.begin(9600);

}


void loop() 
{

 if (bluetooth.available())

   {

    value = bluetooth.readString();

if (value=="LED on")
{
  Serial.println("Led On");
digitalWrite(2,HIGH);
}
else if(value=="LED off")
{
  Serial.println("Led OFF");
digitalWrite(2,LOW);
}

}

}

