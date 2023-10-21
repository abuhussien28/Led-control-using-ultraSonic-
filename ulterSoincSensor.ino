#define  TringPin 9
#define EchoPin 10
#define LED 13
long direc;
int distance;
void setup() {
  // put your setup code here, to run once:
pinMode(EchoPin,INPUT);
pinMode(TringPin,OUTPUT);
pinMode(LED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(TringPin,LOW);
delayMicroseconds(2);
digitalWrite(TringPin,HIGH);
delayMicroseconds(10);
direc=pulseIn(EchoPin, HIGH);
distance=direc*0.034/2;
if(distance >=10 && distance<=50){
  digitalWrite(LED,HIGH);
}
else{
    digitalWrite(LED,LOW);
}
Serial.print("Distance is ");
Serial.println(distance);
delay(2000);
}
