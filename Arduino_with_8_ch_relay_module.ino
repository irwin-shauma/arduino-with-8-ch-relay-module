//Arduino with 8 ch relay module
//Github : irwin-shauma
//Link : https://github.com/irwin-shauma/arduino-with-8-ch-relay-module

void setup() {
  // Setting up the port for relay pinout (4 to 11)
  // Relay activation is active low, which means setting it LOW will trigger on the relay.
  for(int i=4; i<12; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
}

void loop() {

  for(int i=4; i<12; i++){
    digitalWrite(i, LOW);
    delay(1000);
  }

  for(int i=4; i<12;i++){
    digitalWrite(i, HIGH);
    delay(1000);
  }
}
