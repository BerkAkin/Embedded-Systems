#define potans A0 
int deger = 0; 
void setup() {
  Serial.begin(9600);
}
void loop() {
  deger = analogRead(potans); 
  Serial.println(deger); 
  delay(50);
}