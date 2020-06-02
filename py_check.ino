
#include<Servo.h>
Servo servo1,servo2,servo4,servo5;
int buzzer=11;
int angle;
char data='0';
void setup() {
  Serial.begin(9600);
  servo1.attach(9);
  servo2.attach(5);
  servo4.attach(6);
  servo5.attach(3);
  
  //int i;
  servo2.write(50);
  servo1.write(50);
  servo4.write(0);
  servo5.write(0);
  
}
//int i=0;
void loop() {
  
  data=Serial.read();
  Serial.write(data);
  
  switch(data){
      case 'b':
        for(int i=1;i<=3;i++){
          tone(buzzer, 900);
          delay(500);
          noTone(buzzer);
          delay(500);
          
        }
        break;
      case '1':
        
        for(angle = 50; angle >0; angle -= 1)     
        {                                  
          servo1.write(angle);                 
           delay(5);                       
        }
        delay(1000);
        for(angle = 0; angle <50; angle += 1)     
        {                                  
          servo1.write(angle);                 
           delay(5);                       
        } 
        break;
      case '2':
        for(angle = 50; angle >0; angle -= 1)     
        {                                  
          servo1.write(angle);
          servo2.write(angle);                 
           delay(5);                       
        }
        delay(1000);
        for(angle = 0; angle <50; angle += 1)     
        {                                  
          servo1.write(angle);
          servo2.write(angle);                 
           delay(5);                       
        }
        break;
       case '3':
        for(angle = 50; angle >0; angle -= 1)     
        {                                  
          servo1.write(angle);
          servo4.write(50-angle);                 
           delay(5);                       
        }
        delay(1000);
        for(angle = 0; angle <50; angle += 1)     
        {                                  
          servo1.write(angle);
          servo4.write(50-angle);                 
           delay(5);                       
        }
        break;
        case '4':
        for(angle = 50; angle >0; angle -= 1)     
        {                                  
          servo1.write(angle);
          servo4.write(50-angle);
          servo5.write(50-angle);                 
           delay(5);                       
        }
        delay(1000);
        for(angle = 0; angle <50; angle += 1)     
        {                                  
          servo1.write(angle);
          servo4.write(50-angle);
          servo5.write(50-angle);                 
          
           delay(5);                       
        }
        break;
        case '5':
        for(angle = 50; angle >0; angle -= 1)     
        {                                  
          servo1.write(angle);
          //servo4.write(50-angle);
          servo5.write(50-angle);                 
           delay(5);                       
        }
        delay(1000);
        for(angle = 0; angle <50; angle += 1)     
        {                                  
          servo1.write(angle);
          //servo4.write(50-angle);
          servo5.write(50-angle);                 
           delay(5);                       
        }
        break;
        case '6':
        for(angle = 50; angle >0; angle -= 1)     
        {                                  
          servo1.write(angle);
          servo4.write(50-angle);
          servo2.write(angle);                 
           delay(5);                       
        }
        delay(1000);
        for(angle = 0; angle <50; angle += 1)     
        {                                  
          servo1.write(angle);
          servo4.write(50-angle);
          servo2.write(angle);                 
           delay(5);                       
        }
        break;     
        case '7':
        for(angle = 50; angle >0; angle -= 1)     
        {                                  
          servo1.write(angle);
          servo4.write(50-angle);
          servo2.write(angle);   
          servo5.write(50-angle);              
           delay(5);                       
        }
        delay(1000);
        for(angle = 0; angle <50; angle += 1)     
        {                                  
          servo1.write(angle);
          servo4.write(50-angle);
          servo2.write(angle);
          servo5.write(50-angle);                 
           delay(5);                       
        }
        break;  
        case '8':
        for(angle = 50; angle >0; angle -= 1)     
        {                                  
          servo1.write(angle);
          //servo4.write(50-angle);
          servo2.write(angle);   
          servo5.write(50-angle);              
           delay(5);                       
        }
        delay(1000);
        for(angle = 0; angle <50; angle += 1)     
        {                                  
          servo1.write(angle);
          //servo4.write(50-angle);
          servo2.write(angle);
          servo5.write(50-angle);                 
           delay(5);                       
        }
        break;
        case '9':
        for(angle = 50; angle >0; angle -= 1)     
        {                                  
          //servo1.write(angle);
          servo4.write(50-angle);
          servo2.write(angle);   
          //servo5.write(50-angle);              
           delay(5);                       
        }
        delay(1000);
        for(angle = 0; angle <50; angle += 1)     
        {                                  
          //servo1.write(angle);
          servo4.write(50-angle);
          servo2.write(angle);
          //servo5.write(50-angle);                 
           delay(5);                       
        }
        break;    
        case '0':
        for(angle = 50; angle >0; angle -= 1)     
        {                                  
          //servo1.write(angle);
          servo4.write(50-angle);
          servo2.write(angle);   
          servo5.write(50-angle);              
           delay(5);                       
        }
        delay(1000);
        for(angle = 0; angle <50; angle += 1)     
        {                                  
          //servo1.write(angle);
          servo4.write(50-angle);
          servo2.write(angle);
          servo5.write(50-angle);                 
           delay(5);                       
        }
        break;  
        

       
    }
    delay(100);
 
  
    
  

}
