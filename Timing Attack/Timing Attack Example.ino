void setup() {

    Serial.begin(9600);
    pinMode(2, OUTPUT);
    digitalWrite(2, LOW); 

}

char password[] = "0132";
char user_text[4];
int len = 0;

void loop() {

    if (Serial.available()) {

        user_text[len] = Serial.read();
        len++;

        if (len == 4) {

            len = 0;

            digitalWrite(2, HIGH);

            if (!strcmp(password, user_text)) {

                Serial.println("SUCCESS!\n");

            } else {

                Serial.println("FAILED!\n");

            }

            digitalWrite(2, LOW);

        }

    }

}