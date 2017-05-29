int dark = 0;

void setup() {
   pinMode(A0, INPUT_PULLUP);
   Serial.begin(115200);
}

void loop() {
  dark = analogRead(A0);
  Serial.println(dark);
  delay(300);
}
