#include <Servo.h>

    Servo myservo;  


    void setup() {
      myservo.attach(9);  

    }

    void loop() {
      
      myservo.attach(9);  
      delay(15);
      myservo.write(0);
      delay(1000); 
      myservo.detach();
      delay(1000);      
      
      myservo.attach(9); 
      delay(15);  
      myservo.write(95);
      delay(1000); 
      myservo.detach();
      delay(1000);                  

      
    }
