const int buttonpin = 27;
int ledpins[] = {23,22,21,12,19,18,17,16};
int pincount = 8;
int buttonstate = 0;
int lightpin = 0;
int flag = 0;
void setup() {
  pinMode(27,INPUT);

  for(int thispin = 0;thispin < pincount;thispin++){
      pinMode(ledpins[thispin],OUTPUT);
  }
  for(int thispin = 0;thispin < pincount;thispin++){
       digitalWrite(ledpins[thispin],LOW);
      delay(200);
  }
}

void loop() {
  buttonstate =digitalRead(buttonpin);

  if(buttonstate == HIGH&&flag == 0)
  {
    digitalWrite(ledpins[lightpin],HIGH);
    lightpin++;
    delay(200);
    if(lightpin == 8)
    {
      flag = 1;
    }
  }
  if(buttonstate == HIGH&&flag == 1)
  {
    digitalWrite(ledpins[lightpin],LOW);
    lightpin--;
    delay(200);
    if(lightpin == (-1))
    {
      flag = 0;
      lightpin = 0;
    }
  }
}
