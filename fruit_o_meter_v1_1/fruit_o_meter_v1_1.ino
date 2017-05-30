#include <Servo.h>

Servo myservo;
const int fruitSense = 0;
int fruitResistance, high = 0, low = 1023;
int fruitDetect;

void setup(){
myservo.attach(9);  
Serial.begin(115200);
}

void loop(){
fruitResistance = analogRead(fruitSense);
Serial.print("Resistance:");
Serial.print(fruitResistance);
Serial.print("\n");
if (fruitResistance>700 & fruitResistance<780){
Serial.print("Apple \n");
      myservo.attach(9);  
      delay(15);
      myservo.write(90);
      delay(1000); 
      myservo.detach();
      delay(3000);      
      
      myservo.attach(9); 
      delay(15);  
      myservo.write(180);
      delay(1000); 
      myservo.detach();
      delay(1000);   
}
else if(fruitResistance>800 & fruitResistance<880){
Serial.print("Mandarin \n");
}
else {
Serial.print("No Food \n");
}
delay(1000);
}
