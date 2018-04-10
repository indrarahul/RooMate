int Light1=4;
int Light2=6;
int Fan1=10;
int Fan2=11;

void setup()
{
  Serial.begin(9600)
  pinMode(Light1, OUTPUT);
  pinMode(Light2, OUTPUT);
  pinMode(Fan1, OUTPUT);
  pinMode(Fan2, OUTPUT);

}

void loop()
{

  if(Serial.available())
  {
    char data = Serial.read();
    Serial.print(data);  //Helps in debugging
    if(c == '0')
    digitalWrite(Light1,LOW);
    else if(c == '1')
    digitalWrite(Light1,HIGH);
    else if(c == '3')
    digitalWrite(Light2,LOW);
    else if(c == '4')
    digitalWrite(Light2,HIGH);
    else if(c == '5')
    digitalWrite(Fan1,LOW);
    else if(c == '6')
    digitalWrite(Fan1,HIGH);
    else if(c == '7')
    digitalWrite(Fan2,LOW);
    else if(c == '8')
    digitalWrite(Fan2,HIGH);

  }
}
