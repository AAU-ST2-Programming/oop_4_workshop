void setup() {
  // put your setup code here, to run once:



}
float t= 0.0;

void loop() {
  // put your main code here, to run repeatedly:
  float dt = 1.0/50.0;
  t+=dt;
  printf("%.3f\n", sin(t));
}
