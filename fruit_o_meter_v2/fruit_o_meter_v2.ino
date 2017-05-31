#include <Servo.h>

Servo omenaservo;
Servo banaaniservo;
const int fruitSense = 0;
int fruitResistance, high = 0, low = 1023;
int fruitDetect;

void setup(){
omenaservo.attach(9);
banaaniservo.attach(10);
Serial.begin(115200);
}

void loop(){
fruitResistance = analogRead(fruitSense);
Serial.print("Resistance:");
Serial.print(fruitResistance);
Serial.print("\n");
if (fruitResistance>900 & fruitResistance<980){
Serial.print("Apple \n");
      omenaservo.attach(9);  
      delay(15);
      omenaservo.write(90);
      delay(1000); 
      omenaservo.detach();
      delay(5000);      
      
      omenaservo.attach(9); 
      delay(15);  
      omenaservo.write(180);
      delay(1000); 
      omenaservo.detach();
      delay(1000);   
}
else if(fruitResistance>1000 & fruitResistance<1023){
Serial.print("Mandarin \n");
      banaaniservo.attach(10);  
      delay(15);
      banaaniservo.write(0);
      delay(1000); 
      banaaniservo.detach();
      delay(5000);      
      
      banaaniservo.attach(10); 
      delay(15);  
      banaaniservo.write(95);
      delay(1000); 
      banaaniservo.detach();
      delay(1000); 
}
else {
Serial.print("No Food \n");
}
delay(1000);
}
