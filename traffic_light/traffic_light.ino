//variables
int green = 2;
int yellow = 3;
int red=4;
int delay_green=5000;
int delay_yellow=2000;
int delay_red=5000;

void setup() {
  // put your setup code here, to run once:
pinMode(green,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(red,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
green_light();
delay(delay_green);
yellow_light();
delay(delay_yellow);
red_light();
delay(delay_red);
}

void green_light()
{
  digitalWrite(green,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
}

void yellow_light()
{
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(red,LOW);
}
void red_light()
{
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(red,HIGH);
}
