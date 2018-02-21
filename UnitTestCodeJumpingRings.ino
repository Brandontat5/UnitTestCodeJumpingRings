//variables

const byte chargeRelayPin = 27;
const byte ringTwoRelayPin = 28;
const int waitTimeToCharge = 5000;
const int waitTimeForRingJump = 1000;

void setup() {

 pinMode(chargeRelayPin, OUTPUT);
 chargeCapacitor();
 jumpRingTwo();
}

void loop() {


}

void chargeCapacitor() {
   digitalWrite(chargeRelayPin, HIGH); //circuit is opened by default therefore write to HIGH will close loop
   delay(waitTimeToCharge);
   digitalWrite(chargeRelayPin, LOW);
}

void jumpRingTwo() {
  digitalWrite(ringTwoRelayPin, HIGH);
  delay(waitTimeForRingJump);
  digitalWrite(ringTwoRelayPin, LOW);
}

