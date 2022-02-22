void setup() {
  Serial.begin(9600);
}
void loop() {
  int x = analogRead(1);
  int y = analogRead(4);
  double Z = pow(2,(y-x)) + sin(x)*cos(y);

  Serial.println(Z);
  delay(50);
}
