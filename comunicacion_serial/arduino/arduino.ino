#define PIN_LED 2

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    
    char data = Serial.read();
    
    if (data == 'h') {
      digitalWrite(PIN_LED, HIGH);
    }
    if (data == 'l') {
      digitalWrite(PIN_LED, LOW);
    }

    Serial.println(data);
    delay(1000);
  }

}