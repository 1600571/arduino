#include <Servo.h>

Servo servo1;
Servo servo2;
const int fruitSense = 0;
int fruitResistance, high = 0, low = 1023;

void setup(){
servo1.attach(9);
servo2.attach(10);
Serial.begin(115200);
}

void loop(){
fruitResistance = analogRead(fruitSense);
Serial.print("Resistance:");
Serial.print(fruitResistance);
Serial.print("\n");
if (fruitResistance>781 & fruitResistance<899){
Serial.print("Apple \n");
      servo1.attach(9);  
      delay(15);
      servo1.write(0);
      delay(1000); 
      servo1.detach();
      delay(1000);      
}
else if(fruitResistance>700 & fruitResistance<780){
Serial.print("Banana \n");
      servo1.attach(9);  
      delay(15);
      servo1.write(180);
      delay(1000); 
      servo1.detach();
      delay(1000);      
}
else if(fruitResistance>640 & fruitResistance<699){
Serial.print("Lemon \n");
      servo2.attach(10);  
      delay(15);
      servo2.write(0);
      delay(1000); 
      servo2.detach();
      delay(1000);      
}
else if(fruitResistance>500 & fruitResistance<639){
Serial.print("Cucumber \n");
      servo2.attach(10);  
      delay(15);
      servo2.write(180);
      delay(1000); 
      servo2.detach();
      delay(1000);      
}
else {
Serial.print("No Food \n");
      servo1.attach(9); 
      delay(15);  
      servo1.write(90);
      delay(1000); 
      servo1.detach();
      delay(1000); 
      
      servo2.attach(10); 
      delay(15);  
      servo2.write(90);
      delay(1000); 
      servo2.detach();
      delay(1000); 
}
delay(1000);
}
