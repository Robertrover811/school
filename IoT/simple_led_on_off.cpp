// Features: Individually controlled LED’s that can be turned on and off separately or all together

// Commands: allon, alloff, one on, one off, two on, two off

// Status naming conventions: 01: all on successful, 00: all off successful, 11: onboard on successful, 10: onboard off success, 21: LED one on success, 20: LED one off success, 31: LED two on success, 30: LED two off success, -1: failure 

int led1 = D7;
int led2 = D1;
int led3 = D2;

void setup()
{
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   Particle.function("led",ledToggle);
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
}

void loop()
{
   
}

int ledToggle (String command)
{
    if (command == "allon")
    {
        digitalWrite(led1,HIGH);
        digitalWrite(led2,HIGH);
        digitalWrite(led3,HIGH);
        return 01;
    }
    else if (command == "alloff")
    {
        digitalWrite(led1,LOW);
        digitalWrite(led2,LOW);
        digitalWrite(led3, LOW);
        return 00;
    }
    if (command == "onboard on")
    {
        digitalWrite(led1,HIGH);
        return 11;
    }
    else if (command == "onboard off")
    {
        digitalWrite(led1,LOW);
        return 10;
    }
    if (command == "one on")
    {
        digitalWrite(led2,HIGH);
        return 21;
    }
    else if (command == "one off")
    {
        digitalWrite(led2,LOW);
        return 20;
    }
    if (command == "two on")
    {
        digitalWrite(led3,HIGH);
        return 31;
    }
    else if (command == "two off")
    {
        digitalWrite(led3,LOW);
        return 30;
    }
    else 
    {
        return -1;
    }
}

