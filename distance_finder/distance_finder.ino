//Another way of defining PINS
//#define trigPin 0
//#define echoPin 7

int trigPin=2;
int echoPin=7;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int duration,distance;
int temperature=20;
digitalWrite(trigPin,HIGH);
delayMicroseconds(1000);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=(duration/2)/(1/(((331.5+(0.6*temperature))*100)/1000000));
//distance=duration;
if(distance>=200 || distance<=0) {
  Serial.println("Out of Range");
}
else{
  Serial.print(distance);
  Serial.println(" cm");
}
delay(500);
}
