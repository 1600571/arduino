const int fruitSense = 0;
int fruitResistance, high = 0, low = 1023;
int fruitDetect;

void setup(){
Serial.begin(115200);
}

void loop(){
fruitResistance = analogRead(fruitSense);
Serial.print("Resistance:");
Serial.print(fruitResistance);
Serial.print("\n");
delay(1000);
}
