int blue = D4;
int amber = D5;
int red = D6;

int toggleLed(String command){
    
    if (command == "blue")
    {
        digitalWrite(blue, HIGH);
        digitalWrite(amber, LOW);
        digitalWrite(red, LOW);
        
    }
    else if (command == "amber")
    {
        digitalWrite(blue, LOW);
        digitalWrite(amber, HIGH);
        digitalWrite(red, LOW);
        
    }
    else if (command == "red")
    {
        digitalWrite(blue, LOW);
        digitalWrite(amber, LOW);
        digitalWrite(red, HIGH);
        
    }
    else
    {
        return -1;
    }
    return 1;
    
}


void setup() {
    pinMode(blue, OUTPUT);
    pinMode(amber, OUTPUT);
    pinMode(red, OUTPUT);
    Particle.function("toggle", toggleLed);
}

void loop() {
    
}

