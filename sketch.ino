void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED_BUILTIN, HIGH);
digitalWrite(8, LOW);
delay(1000);

digitalWrite(LED_BUILTIN, LOW);
digitalWrite(8, HIGH);
delay(1000);
}
