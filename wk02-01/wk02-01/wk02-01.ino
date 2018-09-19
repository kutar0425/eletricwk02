const int ledCount = 8;
int count=0; 
int ledPins[] = { 
23,22,21,12,19,18,17,16}; 

bool test = true;

void setup() {
  // put your setup code here, to run once:
pinMode(27, INPUT);
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT); 
  }
  Serial.begin(115200);
}

void loop() {
  int buttonstate = digitalRead(27);
  if(buttonstate==HIGH){
 
    if(count<8){
      digitalWrite(ledPins[count],HIGH);
      count++;
      Serial.println("HIGHHHHHHHHH");
    }

    if(count>=8 && count<16){
      digitalWrite(ledPins[count-8],LOW);
      count++;
     Serial.println("...");
    }

    if(count == 16)count = 0;
    
 }
    
  
}

