void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
pinMode(8, OUTPUT);
pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED_BUILTIN, HIGH);
digitalWrite(8, LOW);
digitalWrite(10, LOW);
delay(20000);

digitalWrite(LED_BUILTIN, LOW);
digitalWrite(8, HIGH);
digitalWrite(10, LOW);
delay(20000);

digitalWrite(LED_BUILTIN, LOW);
digitalWrite(8, LOW);
digitalWrite(10, HIGH);
delay(3000);
}
