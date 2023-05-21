int lm35=A1; 
void setup()
{
Serial.begin(9600); 
}

void loop()
{
int deger=analogRead(lm35); 
float voltaj= deger* (5000/1024.0);  
float sicaklik= voltaj/10.0;

Serial.print("Sıcaklık Degeri: " ); 
Serial.print(sicaklik); 
Serial.println(" C"); 
delay(200);                   
}