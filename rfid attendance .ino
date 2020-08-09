#include <SPI.h>
#include <MFRC522.h>
//#include <LiquidCrystal.h>

//LiquidCrystal lcd(2); //(or the latch pin of the 74HC595)

#define SS_PIN 10 
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN); 

String card_ID=""; 

String Name1="217240194152";
String Name2="10218848202";
String Name3="166745202";
String Name4="2148946202";
String Name5="15017943202";
String Name6="23019649202";
String Name7="7013653212";
String Name8="21418849202";
String Name9="861039202";
String Name10="862646202";
String Name11="3922516616";
String Name12="5410244202";
String Name13="2210145202";
String Name14="10213540202";
String Name15="3813048202";
String Name16="13414446202";
String Name17="15012948202";
String Name18="41206148152";
String Name19="2304249202";
String Name20="65643202";
String Name21="10224350202";
String Name22="19816043202";
String Name23="3811439202";
String Name24="16621550202";
String Name25="5412741202";
String Name26="1984265241";
String Name27="19822041202";
String Name28="1371687763";
String Name29="867952212";
String Name30="1829545202";

int NumbCard[30];
int j=0;
int statu[6];
int s=0;

int const RedLed=6;
int const GreenLed=5;
int const Buzzer=8;

String Name;
long Number;
String ExcelName="Logs";
int L=0;
int n ;
int ID=1;
void setup() {
 //lcd.begin(16, 2);
 Serial.begin(9600);
 SPI.begin();
 mfrc522.PCD_Init();
 
 Serial.println("CLEARSHEET");
 Serial.println("LABEL,ID,Date,Name,Number,Card ID,Time IN,Time OUT");

 pinMode(RedLed,OUTPUT);
 pinMode(GreenLed,OUTPUT);
 pinMode(Buzzer,OUTPUT);
 
 //lcd.setCursor(2,0);
 //lcd.print("Good Morning");
 delay(200);
 }
 
void loop() {
 //look for new card
 if ( ! mfrc522.PICC_IsNewCardPresent()) {
 return;
 }
 
 if ( ! mfrc522.PICC_ReadCardSerial()) {
 return;
 }

 for (byte i = 0; i < mfrc522.uid.size; i++) {
 card_ID += mfrc522.uid.uidByte[i];
 }
 
//Serial.println(card_ID);

 
 if(card_ID==Name1){
 Name="Angelo Agustines";
 Number=2018200883;
 j=0;
 s=0;
 }
 else if(card_ID==Name2){
 Name="Miguel Alcobendas";
 Number=2018200728;
 j=1;
 s=1;
 }
 else if(card_ID==Name3){
 Name="Ian Brown";
 Number=2018200817;
 j=2;
 s=2;
 }
 else if(card_ID==Name4){
 Name="Jidan Cabalza";
 Number=2018200979;
 j=3;
 s=3;
 }
 else if(card_ID==Name5){
 Name="Osmond Contreras";
 Number=2017200479;
 j=4;
 s=4;
 }
 else if(card_ID==Name6){
 Name="Salman Dumarpa";
 Number=2017200470;
 j=5;
 s=5;
 }

  else if(card_ID==Name7){
 Name="Stephen Gustilo";
 Number=2018200547;
 j=6;
 s=6;
 }

  else if(card_ID==Name8){
 Name="Gabriel Javier";
 Number=2018200473;
 j=7;
 s=7;
 }

  else if(card_ID==Name9){
 Name="David Lai";
 Number=2015200668;
 j=8;
 s=8;
 }

 else if(card_ID==Name10){
 Name="Kyle Lim";
 Number=2018200965;
 j=9;
 s=9;
 }

  else if(card_ID==Name11){
 Name="Roberto Llige";
 Number=2014200180;
 j=10;
 s=10;
 }

  else if(card_ID==Name12){
 Name="Rexlon Opolento";
 Number=2018200574;
 j=11;
 s=11;
 }

  else if(card_ID==Name13){
 Name="Ryan Portento";
 Number=2017200470;
 j=12;
 s=12;
 }

  else if(card_ID==Name14){
 Name="Lance Salen";
 Number=2014200455;
 j=13;
 s=13;
 }

  else if(card_ID==Name15){
 Name="Carlos Taoatao";
 Number=2014200279;
 j=14;
 s=14;
 }

  else if(card_ID==Name16){
 Name="Conrad Tolentino";
 Number=2018200566;
 j=15;
 s=15;
 }

  else if(card_ID==Name17){
 Name="Ellitonne Tresballes";
 Number=2018200415;
 j=16;
 s=16;
 }

  else if(card_ID==Name18){
 Name="John Yboa";
 Number=2018200874;
 j=17;
 s=17;
 }

  else if(card_ID==Name19){
 Name="Aliah Clemente";
 Number=2018200843;
 j=18;
 s=18;
 }

  else if(card_ID==Name20){
 Name="Keana Dañosos";
 Number=2018200427;
 j=19;
 s=19;
 }

  else if(card_ID==Name21){
 Name="Julia Ebis";
 Number=2018200394;
 j=20;
 s=20;
 }

  else if(card_ID==Name22){
 Name="Jhem Ferreras";
 Number=2018200832;
 j=21;
 s=21;
 }

  else if(card_ID==Name23){
 Name="Maximilliane Malate";
 Number=2018200581;
 j=22;
 s=22;
 }

  else if(card_ID==Name24){
 Name="Madeleine Miguel";
 Number=2018200825;
 j=23;
 s=23;
 }

  else if(card_ID==Name25){
 Name="Justin Nazareno";
 Number=2014200222;
 j=24;
 s=24;
 }
 
  else if(card_ID==Name26){
 Name="Alyza Novillos";
 Number=2018200411;
 j=25;
 s=25;
 }

  else if(card_ID==Name27){
 Name="Isabel Penera";
 Number=2018200849;
 j=26;
 s=26;
 }

  else if(card_ID==Name28){
 Name="Andrea Suliguin";
 Number=2018201048;
 j=27;
 s=27;
 }

  else if(card_ID==Name29){
 Name="Eunice Tapit";
 Number=2018200951;
 j=28;
 s=28;
 }

  else if(card_ID==Name30){
 Name="Gwyneth Ticman";
 Number=2018200419;
 j=29;
 s=29;
 }

 else{
 digitalWrite(GreenLed,LOW);
 digitalWrite(RedLed,HIGH);
 goto cont;
 }

 if(NumbCard[j] == 1 && statu[s] == 0){
 statu[s]=1;
 NumbCard[j] = 0;
 // lcd.clear();
 // lcd.setCursor(0,0);
 // lcd.print("Good Bye");
 // lcd.setCursor(0,1);
 // lcd.print(Name);
 Serial.print("DATA,");
 Serial.print(ID);
 Serial.print(",");
 Serial.print("DATE");
 Serial.print(",");
 Serial.print(Name);
 Serial.print(",");
 Serial.print(Number);
 Serial.print(",");
 Serial.print(card_ID);
 Serial.print(",");
 Serial.print("");
 Serial.print(",");
 Serial.println("TIME");
 ID=ID+1;
 n++;//(optional)
 digitalWrite(GreenLed,HIGH);
 digitalWrite(RedLed,LOW);
 digitalWrite(Buzzer,HIGH);
 delay(30);
 digitalWrite(Buzzer,LOW);
 }
 else if(NumbCard[j] == 0){
 NumbCard[j] = 1;
 statu[s]=0;
 n++;
 // lcd.clear();
 // lcd.setCursor(4,0);
 // lcd.print("Welcome ");
 // lcd.setCursor(0,1);
 // lcd.print(Name);
 Serial.print("DATA,");
 Serial.print(ID);
 Serial.print(",");
 Serial.print("DATE");
 Serial.print(",");
 Serial.print(Name);
 Serial.print(",");
 Serial.print(Number);
 Serial.print(",");
 Serial.print(card_ID);
 Serial.print(",");
 Serial.print("TIME");
 Serial.print(",");
 Serial.println("");
 digitalWrite(GreenLed,HIGH);
 digitalWrite(RedLed,LOW);
 digitalWrite(Buzzer,HIGH);
 delay(30);
 digitalWrite(Buzzer,LOW);
 ID=ID+1;
 }
 /*else if(statu[s] == 1){
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print(Name);
 lcd.setCursor(0,1);
 lcd.print("Already Left");
 }*/
 delay(500);
 //lcd.clear();
 //lcd.setCursor(2,0);
 //lcd.print("Good Morning");

cont:
delay(500);
digitalWrite(GreenLed,LOW);
digitalWrite(RedLed,LOW);
card_ID="";

}
