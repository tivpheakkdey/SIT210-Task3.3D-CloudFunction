int ledPin = D6;    //Instead of writing the pin over and over again, let's assign them to a variable for reusability.
int ledPin2 = D5;

void myHandler(const char *event, const char *data);    //forward declaration

void setup() 
{
    pinMode(ledPin, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);   
}

void loop() 
{
    
}

void myHandler(const char *event, const char *data)
{
    if(strcmp(data, "wave") == 0)
    {
        Particle.publish("signal", "received wave", PRIVATE);    //to log that the device recieved the signal from the event Deakin_RIOT_SIT210_Photon_Buddy
        
        digitalWrite(ledPin, HIGH);
        delay(500);
        digitalWrite(ledPin, LOW);
        
        delay(500);
        
        digitalWrite(ledPin, HIGH);
        delay(500);
        digitalWrite(ledPin, LOW);
        
        delay(500);
        
        digitalWrite(ledPin, HIGH);
        delay(500);
        digitalWrite(ledPin, LOW);
        
        delay(500);
        
    }
    
    if(strcmp(data, "pat") == 0)
    {
        Particle.publish("signal", "received pat", PRIVATE);    //to log that the device recieved the signal from the event Deakin_RIOT_SIT210_Photon_Buddy
        
        digitalWrite(ledPin2, HIGH);
        delay(500);
        digitalWrite(ledPin2, LOW);
        
        delay(500);
        
        digitalWrite(ledPin2, HIGH);
        delay(500);
        digitalWrite(ledPin2, LOW);
        
        delay(500);
        
        digitalWrite(ledPin2, HIGH);
        delay(500);
        digitalWrite(ledPin2, LOW);
        
        delay(500);
        
    }
}