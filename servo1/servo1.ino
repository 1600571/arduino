#include <Servo.h>

    Servo myservo;  


    void setup() {
      myservo.attach(9);  

    }

    void loop() {
      
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
      delay(90000);                  

      
    }
