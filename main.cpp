// Dial Value Fade

int dialValue = 0;

void setup ()
{
  // Setting Pontentiometer as input
  pinMode(A1, INPUT);
  // Setting red LED as output
  pinMode(9, OUTPUT);
  // Setting orange LED as output
  pinMode(6, OUTPUT);
}

void loop ()
{
  // Sets the value of dialValue equal to the input of the dial 
  dialValue = analogRead(A1);
  if (dialValue > 500)
  {
    // If the input is greater that 500, turn red on and orange off 
    digitalWrite(9, HIGH);
    digitalWrite(6, LOW);
  }
  else
  {
    // If it is less than 500 turn red off and orange on
  digitalWrite(9, LOW);
  digitalWrite(6, HIGH);
  }
}