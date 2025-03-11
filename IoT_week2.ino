#define TRIG 13
#define ECHO 12

void setup()
{	
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop()
{
  long duration,distance;
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  duration = pulseIn(ECHO, HIGH);
  
  distance = duration / 58.2;

  if(distance >= 100)
  {
    digitalWrite(2, HIGH);
 	  digitalWrite(9, LOW);
  }
  else
  {
    digitalWrite(9, HIGH);
  	digitalWrite(2, LOW);
  }

  Serial.println(duration);
  Serial.print("\nDistance : ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000);
}