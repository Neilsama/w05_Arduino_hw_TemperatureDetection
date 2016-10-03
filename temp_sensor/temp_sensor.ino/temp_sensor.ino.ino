int tempPin = 0;
int speakerPin = 2;
int ledPinRed = 7;
int ledPinGreen = 6;
int tones[] = {261, 294, 330, 349, 392, 440};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPinRed, OUTPUT);
  digitalWrite(ledPinRed,HIGH);
  pinMode(ledPinGreen, OUTPUT);
  digitalWrite(ledPinGreen,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  int temp = analogRead(tempPin);
  Serial.println(temp);
  if( temp <= 147){
    noTone(speakerPin);
    digitalWrite(ledPinRed,HIGH);
    digitalWrite(ledPinGreen,LOW);
    }
    else{
      digitalWrite(ledPinRed,LOW);
      digitalWrite(ledPinGreen,HIGH);
       for (int i = 0; i < 6; i++)
        {
          tone(speakerPin, tones[i]);
          delay(100);
         }
      }
}
