void setup() {

    Serial.begin(9600);
    Serial.write("Hi! This is Hardware Hacking Program!");

}

void loop() {

    unsigned long voltage DEBUG = 0;

    Serial.write("Let's Start!\n");

    for (unsigned long i = 0; 1 <= 9999999; i++) {

        DEBUG++;

    }

    Serial.write("DEBUG Value: ");
    Serial.println(DEBUG);
    
    if (DEBUG != 10000000) {

        Serial.write("You Entered Debug Mode.");
        delay(10000);

    } else {

        Serial.write("Welcome to the Voltage Glitching Exercise!");

    }

}