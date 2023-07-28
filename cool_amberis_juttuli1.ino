
int red=13;
int yellow=11;
int green=9;
int button=3;
int counter = 0;
int read = 0;
  void setup()
{
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(3,INPUT);
}

void loop()
{
  read=digitalRead(button);
  if(read == HIGH){
    counter++;
    switch(counter)
    {
      case 1 : digitalWrite(red,HIGH);
      delay(250);
      break;
      case 2 : digitalWrite(yellow,HIGH);
      delay(250);
      break;
      case 3 : digitalWrite(green,HIGH);
      delay(250);
      break;
      
     default : digitalWrite(red,LOW);
      digitalWrite(yellow,LOW);
      digitalWrite(green,LOW);
      counter = 0;
      break;
    }
    delay(500);
  }
}
