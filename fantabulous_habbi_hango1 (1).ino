int led1=9;
int led2=10;
int led3=11;
int button=4;
int counter=0;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(button,INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
if( digitalRead(button)==HIGH)
{
  counter+=1;
  if(counter==1)
  digitalWrite(led1,HIGH); 
  else if (counter==2)
   digitalWrite(led2,HIGH);
    else if (counter==3)
  digitalWrite(led3,HIGH);
else
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  counter=0;
}
  delay(250);
}
}