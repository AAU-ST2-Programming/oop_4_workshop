void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(400);
}
float counter = 0;
void loop() {
  // put your main code here, to run repeatedly:
  float dt = 0.1* PI;
  Serial.printf("%.2f\n",sin(counter* PI)+sin(counter* PI*0.27));
  counter+=dt;
  delay(100);
}
