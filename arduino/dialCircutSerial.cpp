int dialvalue = 0;
int brightness = 0;
void setup ()
{
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
}


void loop ()
{
  dialvalue = analogRead(A1);
  brightness = map(dialvalue, 0, 1023, 0, 255);
  analogWrite(9, brightness);
  analogWrite(6, -brightness);
  analogWrite(3, brightness);
  Serial.print(dialvalue);
  Serial.print(" Brightness: ");
  Serial.println(brightness);
}
