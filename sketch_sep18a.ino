int waterval=0;
int soilval=0;
String stat;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  waterval=analogRead(A0);
  soilval=analogRead(A1);

  if (waterval <= 100){
    stat="empty";
  } 
  else if (waterval >200 && waterval <= 400){
    stat="low";
  } 
  else if (waterval >400 && waterval <= 500){
    stat="medium";
  } 
  else if (waterval >= 600){
    stat="high";
  }

 
  Serial.print(soilval);
  Serial.print(",");
  Serial.print(waterval);
  Serial.print(",");
  Serial.print(stat);
  Serial.print(",");
  Serial.println();
  delay(1000);
}
