int lm35 = A1; //analog pin tanımlandı.
int kirmizi = 10;//rgb ledlerin pinleri tanımlandı. 
int yesil = 9;
int mavi = 8;
void setup() {
  Serial.begin(9600); //Serial haberleşme açıldı.
  pinMode(kirmizi, OUTPUT); //rgb ledlerin pinlerini aktif eder. 
  pinMode(yesil, OUTPUT); //rgb ledlerin pinlerini aktif eder. 
  pinMode(mavi, OUTPUT); //rgb ledlerin pinlerini aktif eder. 
}
void loop() {
 int deger = analogRead(lm35);
   float cikti = ( deger/1024.0)*5000;
   float sicaklik = cikti/10.0;
Serial.print("Sıcaklık degeri: ");
Serial.print(sicaklik); //Sıcaklık degeri serial monitor yazılıyor.
Serial.println(" C");
  delay(1000);
  if(sicaklik>0 && sicaklik <18) //0 ile 18 derece arasında ise asağıdaki komutları yaparak mavi ledi yakar.
  {
    digitalWrite(kirmizi,0); //rcb ledlerden sadece mavi led yanma komudu verildi. 
    digitalWrite(yesil,0);
    digitalWrite(mavi,1);
  }
   else if(sicaklik>18 && sicaklik <25) //18 ile 25 derece arasında ise asağıdaki komutları yaparak yesil ledi yakar.
  {
    digitalWrite(kirmizi,0); //rcb ledlerden sadece yesil led yanma komudu verildi. 
    digitalWrite(yesil,1);
    digitalWrite(mavi,0);
  }
    else  if(sicaklik>25 ) // 25 derece ustu ise asağıdaki komutları yaparak kırmızı ledi yakar.
  {
    digitalWrite(kirmizi,1);//rcb ledlerden sadece kırmızı led yanma komudu verildi. 
    digitalWrite(yesil,0);
    digitalWrite(mavi,0);
  } 
}