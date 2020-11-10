/*
   TUTORIAL SERIAL MONITOR ARDUINO 
   MENAMPILKAN NILAI MILLIS
*/

   
void setup() {
  Serial.begin(115200);//memulai inisiasi komunikasi serial dengan baud rate 115200 bps
  Serial.println("Mencoba Serial Monitor 3");
}

void loop() {
  Serial.print("Nilai dari millis saat ini :");
  Serial.println(millis());
  delay(1000);
}
