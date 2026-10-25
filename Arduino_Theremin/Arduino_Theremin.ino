const int sendPitch = D0;
const int recPitch = D1;
const int sendVol = D2;
const int recVol = D3;
const int speakerPin = D9;

long basePitch, baseVol;

long readAntenna(int sendPin, int recvPin){
  long count = 0;
  for(int i = 0; i < 10; i++){
    digitalWrite(sendPin, LOW);
    pinMode(recvPin, OUTPUT);
    digitalWrite(recvPin, LOW);
    delayMicroseconds(100);
    pinMode(recvPin, INPUT);
    digitalWrite(sendPin, HIGH);
    while (digitalRead(recvPin) == LOW && count < 2000000) {
      count++
    }
  }
  return count;
}


void setup() {
  Serial.begin(9600);

  pinMode(sendPitch, OUTPUT);
  pinMode(sendVol, OUTPUT);
  pinMode(speakerPin, OUTPUT);

  delay(1000);

  basePitch = readAntenna(sendPitch, recPitch);
  baseVol = readAntenna(sendVol, recVol)

  Serial.println("Theremin Activated");

}

void loop() {
  long pitch = readAntenna(sendPitch, recPitch) - basePitch;
  long volume = readAntenna(sendVol, recVol) - baseVol;

  Serial.print("Pitch Change: ");
  Serial.printlin(pitch);

  if (p > 30){
    int frequency = map(constrain(pitch, 30, 600), 30, 600, 200, 1500);
    analogWriteFreq(frequency);

    int vol = map(constrain(volume, 0, 600), 0, 600, 128, 0);
    analogWrite(speakerPin, vol);
  }
  else {
    analogWrite(speakerPin, 0);
  }

}
