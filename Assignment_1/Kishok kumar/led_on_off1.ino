#define t 7
#define e 6
#define r 2
#define y 3
#define g 4
void setup()
{
  Serial.begin(9600);
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
   pinMode(r,OUTPUT);
   pinMode(y,OUTPUT);
   pinMode(g,OUTPUT);
}
void loop()
{
  digitalWrite(t,LOW);
  digitalWrite(t,HIGH);
  delayMicroseconds(10);
  digitalWrite(t,LOW);
  float dur = pulseIn(e,HIGH);
  float dis = ((dur/2) * 0.0343);
  Serial.print("Distance in cm:");
  Serial.println(dis);
  if(dis<50)
  {
    digitalWrite(r,LOW);
    digitalWrite(y,LOW);
    digitalWrite(g,LOW);
  }
  else if(dis>=50 && dis<=100)
  {
    digitalWrite(r,HIGH);
    digitalWrite(y,LOW);
    digitalWrite(g,LOW);
  }
  else if(dis>=100 && dis<=200)
  {
    digitalWrite(r,LOW);
    digitalWrite(y,HIGH);
    digitalWrite(g,LOW);
  }
 else
  {
    digitalWrite(r,HIGH);
    digitalWrite(y,HIGH);
    digitalWrite(g,HIGH);
  }
  
  
  delay(1000);
}