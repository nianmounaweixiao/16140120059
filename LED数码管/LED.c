void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 int income=0;
  if(Serial.available()>0)
  {
    income=Serial.read();
    income=income-'0';
    if(income&0x1)
    {
      digitalWrite(4,HIGH);
    }
    else digitalWrite(4,LOW);

    if((income>>1)&0x1)
    {
      digitalWrite(5,HIGH);
    }
    else digitalWrite(5,LOW);
    if((income>>2)&0x1)
    {
      digitalWrite(6,HIGH);
    }
    else digitalWrite(6,LOW);
    if((income>>3)&0x1)
    {
        digitalWrite(7,HIGH);
    }
    else digitalWrite(7,LOW);
    if((income>>4)&0x1)
    {
        digitalWrite(3,HIGH);
    }
    else digitalWrite(3,LOW);
}
}