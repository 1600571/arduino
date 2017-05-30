const int frootSense = 0;
int frootResistance, high = 0, low = 1023;
int frootDetect;

void setup(){
Serial.begin(115200);
}

void loop(){
frootResistance = analogRead(frootSense);
Serial.print("Resistance:");
Serial.print(frootResistance);
Serial.print("\n");
if (frootResistance>400 & frootResistance<700){
Serial.print("Cucumber \n");
}
else if(frootResistance>140 & frootResistance<300){
Serial.print("Apple");
}
else {
Serial.print("No Food \n");
}
delay(1000);
}
