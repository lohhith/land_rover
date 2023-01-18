char t;
int LIN1 = 13;
int LIN2 = 12;
int RIN3 = 11;
int RIN4 = 10;
int LENA = 5;
int RENB = 6;
int q1 = 3;
int q2 = 4;
int enSpeed = 100;
 
void setup() {
pinMode(LIN1,OUTPUT);   
pinMode(LIN2,OUTPUT);   
pinMode(RIN3,OUTPUT);   
pinMode(RIN4,OUTPUT);
pinMode(LENA,OUTPUT);
pinMode(RENB,OUTPUT);
pinMode(q1,OUTPUT);
pinMode(q2,OUTPUT);   
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}

digitalWrite(q1,HIGH);
digitalWrite(q2,HIGH);

 
if(t == 'F'){            
  digitalWrite(LIN1,HIGH);
  analogWrite(LENA,175);
  digitalWrite(RIN3,HIGH);
  analogWrite(RENB,175);
}
 
else if(t == 'B'){      
  digitalWrite(LIN2,HIGH);
  digitalWrite(RIN4,HIGH);
  analogWrite(LENA,175);
  analogWrite(RENB,175);
}
 
else if(t == 'L'){      
  digitalWrite(RIN3,HIGH);
  analogWrite(RENB,175);
}
 
else if(t == 'R'){      
  digitalWrite(LIN1,HIGH);
  analogWrite(LENA,175);
}

else if(t == 'G'){      
  digitalWrite(RIN3,HIGH);
  digitalWrite(LIN1,HIGH);
  analogWrite(LENA,enSpeed);
  analogWrite(RENB,175);
}
 
else if(t == 'I'){      
  digitalWrite(RIN3,HIGH);
  digitalWrite(LIN1,HIGH);
  analogWrite(RENB,enSpeed);
  analogWrite(LENA,175);
}

else if(t == 'H'){      
  digitalWrite(RIN4,HIGH);
  digitalWrite(LIN2,HIGH);
  analogWrite(LENA,enSpeed);
  analogWrite(RENB,175);
}

else if(t == 'J'){      
  digitalWrite(RIN4,HIGH);
  digitalWrite(LIN2,HIGH);
  analogWrite(RENB,enSpeed);
  analogWrite(LENA,175);
}
 
else if(t == 'S'){      
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}

}
