void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    char data = Serial.read();

    if(data == '00000'){
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      digitalWrite(9,LOW);
    }
    if(data == '00001'){
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      digitalWrite(9,HIGH);
    }
    if(data == '00010'){
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
    }
    if(data == '00011'){
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(9,HIGH);
    }
    if(data == '00100'){
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(9,LOW);
    }
    if(data == '00101'){
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(9,HIGH);
    }
    if(data == '00110'){
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
    }
    if(data == '00111'){
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(9,HIGH);
    }
    if(data == '01000'){
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      digitalWrite(9,LOW);
    }
    if(data == '01001'){
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      digitalWrite(9,HIGH);
    }
    if(data == '01010'){
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
    }
    if(data == '01011'){
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(9,HIGH);
    }
    if(data == '01100'){
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(9,LOW);
    }
    if(data == '01101'){
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(9,HIGH);
    }
    if(data == '01110'){
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
    }
    if(data == '01111'){
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(9,HIGH);
    }
    //.---------------------------------------------------
    if(data == '10000'){
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      digitalWrite(9,LOW);
    }
    if(data == '10001'){
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      digitalWrite(9,HIGH);
    }
    if(data == '10010'){
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
    }
    if(data == '10011'){
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(9,HIGH);
    }
    if(data == '10100'){
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(9,LOW);
    }
    if(data == '10101'){
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(9,HIGH);
    }
    if(data == '10110'){
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
    }
    if(data == '10111'){
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(9,HIGH);
    }
    if(data == '11000'){
      digitalWrite(13,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      digitalWrite(9,LOW);
    }
    if(data == '11001'){
      digitalWrite(13,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      digitalWrite(9,HIGH);
    }
    if(data == '11010'){
      digitalWrite(13,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
    }
    if(data == '11011'){
      digitalWrite(13,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(9,HIGH);
    }
    if(data == '11100'){
      digitalWrite(13,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(9,LOW);
    }
    if(data == '11101'){
      digitalWrite(13,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(9,HIGH);
    }
    if(data == '11110'){
      digitalWrite(13,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
    }
    if(data == '11111'){
      digitalWrite(13,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(9,HIGH);
    }
  }
}
