void setup() {
  Serial.begin(9600);
}

void loop() {
Serial.write(65);
Serial.write('\t');
Serial.write(97);
Serial.write('\n');
delay(1000);

Serial.write("Kocaeli Universitesi");
Serial.write('\n');
delay(1000);

Serial.println(65, HEX);
Serial.print(65, DEC);
Serial.print('\t');
Serial.print(65, HEX);
Serial.print('\t');
Serial.print(65, OCT);
Serial.print('\t');
Serial.print(65, BIN);
Serial.print('\n');
delay(1000);
}
