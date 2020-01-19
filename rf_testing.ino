#include<SoftwareSerial.h>
SoftwareSerial ss(4,5);//rx/tx
char rf_tag[12];
int c=0;
String tg0="PASSENGER-1",tg1="PASSENGER-2",tg2="PASSENGER-3",tg3="PASSENGER-4",tg4="PASSENGER-5",tg5="passenger-6",tg6="passenger-7",tg7="passenger-8"; 
String tag1="2600858C9EB1";
String tag2="550034B09849";
String tag3="67001AA8A471";
String tag4="67001AF6AA21";
String tag5="67001AC365DB";
String tag6="4400AA7FE574";
String tag7="4400AA7FF667";
String tag8="67001AC9C97D";
String ep0="ENRTY POINT 1",ep1="ENRTY POINT 2",ep2="ENRTY POINT 3",ep3="ENRTY POINT 4",ep4="ENRTY POINT 5",ep5="ENRTY POINT 6",ep6="ENRTY POINT 7",ep7="ENRTY POINT 8";

void setup()
{
  ss.begin(9600);
  Serial.begin(9600);
  Serial.println("EM-18 Readder Data");
  Serial.println("Data");
  Serial.println("TAP-CARD");
}
void loop(){
  String id="";
  if(Serial.available()){
    c=0;
    while(Serial.available() && c<12){
      rf_tag[c]=Serial.read();
      c++;
      delay(5);
    }
   }
   for(int j=0; j<12; j++){
   id = id + rf_tag[j];
   }
   if(id == tag1){
    
    Serial.println(tag1);
    //tg0="Passenger-1";
    int amt1 = 100;
    Serial.println(tg0);
    Serial.print("Amount Remaning:- ");
    Serial.print(amt1);
    Serial.println();
    Serial.print("ENTRY STATUS:- ");
    Serial.print(ep0);
    Serial.println();
    Serial.print("GEO DATA:- ");
    Serial.println("76.8920, 28.9087");
    if(ss.available()>0){
      ss.println(tag1);
      delay(100);
      ss.println(tg0);
      delay(100);
      ss.println(amt1);
      delay(100);
      ss.println(ep0);
      delay(100);
      ss.println("76.8920, 28.9087");
      ss.println("                ");
      }
    delay(500);
    id="";
     }
   if(id == tag2){
    Serial.println(tag2);
     //rf_tg1="Passenger-2";
     int amt2 = 100;
    Serial.println(tg1);
    Serial.print("Amount Remaning:- ");
    Serial.print(amt2);
    Serial.println();
    Serial.print("ENTRY STATUS:- ");
    Serial.print(ep1);
    Serial.println();
    Serial.print("GEO DATA:- ");
    Serial.println("76.8920, 28.9087");
    if(ss.available()>0){
      ss.println(tag2);
      delay(100);
      ss.println(tg1);
      delay(100);
      ss.println(amt2);
      delay(100);
      ss.println(ep1);
      delay(100);
      ss.println("76.8920, 28.9087");
      ss.println("                ");
      }
    delay(500);
    id="";
   }
   if(id == tag3){
    Serial.println(tag3);
     //rf_tg3="Passenger-2";
     int amt3 = 100;
    Serial.println(tg2);
    Serial.print("Amount Remaning:- ");
    Serial.print(amt3);
    Serial.println();
    Serial.print("ENTRY STATUS:- ");
    Serial.print(ep2);
    Serial.println();
    Serial.print("GEO DATA:- ");
    Serial.println("76.8920, 28.9087");
    if(ss.available()>0){
      ss.println(tag3);
      delay(100);
      ss.println(tg2);
      delay(100);
      ss.println(amt3);
      delay(100);
      ss.println(ep2);
      delay(100);
      ss.println("76.8920, 28.9087");
      ss.println("                ");
      }
    delay(500);
    id="";
   }
   
   if(id == tag4){
    Serial.println(tag4);
     //rf_tg3="Passenger-2";
     int amt4 = 100;
    Serial.println(tg3);
    Serial.print("Amount Remaning:- ");
    Serial.print(amt4);
    Serial.println();
    Serial.print("ENTRY STATUS:- ");
    Serial.print(ep3);
    Serial.println();
    Serial.print("GEO DATA:- ");
    Serial.println("76.8920, 28.9087");
    
    if(ss.available()>0){
      ss.println(tag4);
      delay(100);
      ss.println(tg3);
      delay(100);
      ss.println(amt4);
      delay(100);
      ss.println(ep3);
      delay(100);
      ss.println("76.8920, 28.9087");
      ss.println("                ");
      }
    delay(500);
    id="";
   }
   
   if(id == tag5){
    Serial.println(tag5);
     //rf_tg3="Passenger-2";
     int amt5 = 100;
    Serial.println(tg4);
    Serial.print("Amount Remaning:- ");
    Serial.print(amt5);
    Serial.println();
    Serial.print("ENTRY STATUS:- ");
    Serial.print(ep4);
    Serial.println();
    Serial.print("GEO DATA:- ");
    Serial.println("76.8920, 28.9087");
    if(ss.available()>0){
      ss.println(tag5);
      delay(100);
      ss.println(tg4);
      delay(100);
      ss.println(amt5);
      delay(100);
      ss.println(ep4);
      delay(100);
      ss.println("76.8920, 28.9087");
      ss.println("                ");
      }
    delay(500);
    id="";
   }
   
   if(id == tag6){
    Serial.println(tag6);
     //rf_tg3="Passenger-2";
     int amt6 = 100;
    Serial.println(tg5);
    Serial.print("Amount Remaning:- ");
    Serial.print(amt6);
    Serial.println();
    Serial.print("ENTRY STATUS:- ");
    Serial.print(ep5);
    Serial.println();
    Serial.print("GEO DATA:- ");
    Serial.println("76.8920, 28.9087");
    if(ss.available()>0){
      ss.println(tag6);
      delay(100);
      ss.println(tg5);
      delay(100);
      ss.println(amt6);
      delay(100);
      ss.println(ep5);
      delay(100);
      ss.println("76.8920, 28.9087");
      ss.println("                ");
      }
    delay(500);
    id="";
   }
   
   if(id == tag7){
    Serial.println(tag7);
     //rf_tg3="Passenger-2";
     int amt7 = 100;
    Serial.println(tg6);
    Serial.print("Amount Remaning:- ");
    Serial.print(amt7);
    Serial.println();
    Serial.print("ENTRY STATUS:- ");
    Serial.print(ep6);
    Serial.println();
    Serial.print("GEO DATA:- ");
    Serial.println("76.8920, 28.9087");
    if(ss.available()>0){
      ss.println(tag7);
      delay(100);
      ss.println(tg6);
      delay(100);
      ss.println(amt7);
      delay(100);
      ss.println(ep6);
      delay(100);
      ss.println("76.8920, 28.9087");
      ss.println("                ");
      }
    delay(500);
    id="";
   }
   
   if(id == tag8){
    Serial.println(tag8);
     //rf_tg3="Passenger-2";
     int amt8 = 100;
    Serial.println(tg7);
    Serial.print("Amount Remaning:- ");
    Serial.print(amt8);
    Serial.println();
    Serial.print("ENTRY STATUS:- ");
    Serial.print(ep7);
    Serial.println();
    Serial.print("GEO DATA:- ");
    Serial.println("76.8920, 28.9087");
    if(ss.available()>0){
      ss.println(tag8);
      delay(100);
      ss.println(tg7);
      delay(100);
      ss.println(amt8);
      delay(100);
      ss.println(ep7);
      delay(100);
      ss.println("76.8920, 28.9087");
      ss.println("                ");
      }
    delay(500);
    id="";
   }
 }
