//Capacitive Desk Top Control
//  8-10-21
// Ross Robotics
// 9-1-21 --Added infinity desk lighting
//        --Added door close and open
//        --Added touch pad LEDs
const int lampPin = 10;
const int lampRelay = 9;
//const int lampRed = ;
//const int lampGreen = ;
const int deskLedPin = 11;
const int deskLedRelay = 8;
//const int deskLedRed = ;
//const int deskLedGreen = ;
const int benchLightRelay = 7;
const int benchLightPin = 12;
//const int benchLightRed = ;
//const int benchLightGreen = ;
const int infinityPin = 13;
const int infinityRelay = 6;
//const int infinityRed = ;
//const int infinityGreen = ;
const int doorcloseRelay = 5;
const int doorclosePin = 14;
//const int doorcloseRed = A0;
//const int doorcloseGreen = A0;

//leds for touch pad
//Red==relay off
//green==relay on
//const int deskRed = ;
//const int lampRed = ;
//const int benchRed = ;
//const int infinityRed = ;
//const int doorcloseRed = ;

void setup() {

  pinMode(deskLedRelay, OUTPUT);
  pinMode(deskLedPin, INPUT);
//  pinMode(deskRed, OUTPUT);
//  pinMode(deskGreen, OUTPUT);
  pinMode(lampPin, INPUT);
  pinMode(lampRelay, OUTPUT);
//  pinMode(lampRed, OUTPUT);
//  pinMode(lampGreen, OUTPUT);
  pinMode(benchLightPin, INPUT);
  pinMode(benchLightRelay, OUTPUT);
//  pinMode(benchRed, OUTPUT);
//  pinMode(benchGreen, OUTPUT);
  pinMode(infinityPin, INPUT);
  pinMode(infinityRelay, OUTPUT);
//  pinMode(infinityRed, OUTPUT);
//  pinMode(infinityGreen, OUTPUT);
  pinMode(doorclosePin, INPUT);
  pinMode(doorcloseRelay, OUTPUT);
//  pinMode(doorcloseRed,OUTPUT);
//  pinMode(doorcloseGreen,OUTPUT);
}

void loop() {

  // Relays are Active LOW
  if (digitalRead(deskLedPin) == HIGH) {
    digitalWrite(deskLedRelay, LOW); //turns on relay
    //digitalWrite(deskRed, LOW);
  } else {
    digitalWrite(deskLedRelay, HIGH);
    //digitalWrite(deskRed, HIGH);
  }
  if (digitalRead(lampPin) == HIGH){
    digitalWrite(lampRelay, LOW);
    //digitalWrite(lampRed, LOW);
  }else{
    digitalWrite(lampRelay, HIGH);
    //digitalWrite(lampRed, HIGH);
  }
    if (digitalRead(benchLightPin) == HIGH){
    digitalWrite(benchLightRelay, LOW);
    //digitalWrite(benchLightRed, LOW);
  }else{
    digitalWrite(benchLightRelay, HIGH);
    //digitalWrite(benchLightRed, HIGH);
  }
   if (digitalRead(infinityPin) == HIGH) {
    digitalWrite(infinityRelay, LOW);
    //digitalWrite(infinityRed, LOW);
  } else {
    digitalWrite(infinityRelay, HIGH);
    //digitalWrite(infinityRed, HIGH);
  }
}
