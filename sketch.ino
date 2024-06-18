const byte trigger_pin = 1;
const byte echo_pin = 2;
 
float sound_speed = 0.034;

int BuzzerPin = 26;
int Buzzer_interval = 0;

// Array of led_pins

byte led_pins []={13,15,2,4,5,18,19,21,22,23};

void setup(){
    // defining nature of sensor pins
    pinMode(trigger_pin,OUTPUT);
    pinMode(echo_pin,INPUT);
    pinMode(BuzzerPin,OUTPUT);
    
    // declaring all led pins as output

    for (int i = 0 ;i<(led_pins);i++){
        pinMode(led_pins[i],OUTPUT);
    }
    serial.begin(115200);
    indicator_testing();
}

void loop(){
    int distance= get_distance();
    indicator(distance);
    delay(10);
    
}

