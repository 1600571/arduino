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
if (fruitResistance>700 & fruitResistance<780){
Serial.print("Apple \n");
}
else if(fruitResistance>800 & fruitResistance<880){
Serial.print("Mandarin \n");
}
else {
Serial.print("No Food \n");
}
delay(1000);
}
