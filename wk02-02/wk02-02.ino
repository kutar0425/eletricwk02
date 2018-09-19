int freq = 5000;
int ledChannel = 0;
int resolution = 8;
const int ledPin = 36;
 
void setup() {
 
  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(LED_BUILTIN, ledChannel);
  pinMode(ledPin,OUTPUT);
}
 
void loop() {
 
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
    ledcWrite(ledChannel, dutyCycle);
    delay(7);
  }
 
  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
    ledcWrite(ledChannel, dutyCycle);
    delay(7);
  }
 
}
