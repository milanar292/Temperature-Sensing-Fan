void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(2,INPUT);
}

void loop()
{
  int value= analogRead(A0);
  float voltage=(value*5.0)/1023.0;
  float temp=(voltage-0.5)*100;
  if (temp>32){
  	digitalWrite(11, HIGH);
  	digitalWrite(10, HIGH);
  	digitalWrite(9, LOW);
    
    {if(digitalRead(2)==HIGH){
      analogWrite(11,255);
    }
    else{
      analogWrite(11,128);
    }
  }
  }
  
  else if(temp<28){
    digitalWrite(11, LOW);
  }
  
}