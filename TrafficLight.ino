int led_red = 13;
int led_yellow = 12;
int led_green = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode (led_red, OUTPUT);
  pinMode (led_yellow, OUTPUT);
  pinMode (led_green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_red, HIGH);
  delay(5000);
  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow, HIGH);
  delay(2000);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, HIGH);
  delay(3000);
  digitalWrite(led_green, LOW);
}
