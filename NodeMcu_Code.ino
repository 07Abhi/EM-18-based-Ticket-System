#include<SoftwareSerial.h>
SoftwareSerial s(D5, D6);//rx/tx

void setup()
{
  s.begin(9600);
  Serial.begin(9600);
  Serial.print("Arduino Data");
      
  }
 void loop()
 {
  //s.write("Communication");
  if(s.available()>0)
  {
    
   int data = s.read();
  
    Serial.print(char(data));
    
    
    //Serial.println();
    //delay(500);
    }
  
  }
