#define LED_PIN 2

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_PIN as an output.
  pinMode(LED_PIN, OUTPUT);
}

void timedBlink(int interval) {
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(interval);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(interval); 
}

void dimmer(int freq, int duty) {
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_PIN, HIGH);
  delay(onTime);
  digitalWrite(LED_PIN, LOW);
  delay(offTime);
}

void loop() {
  // put your main code here, to run repeatedly:
  //timedBlink(250);
  //timedBlink(500);
  //timedBlink(1000);
  for(int j = 10; j >= 1; j--) {
  for(int i = 0; i <= 10; i++) {
    dimmer(j*10, i * 10);
  }
  for(int i = 9; i >= 1; i--) {
    dimmer(j*10, i * 10);
  }
  }

  



}
