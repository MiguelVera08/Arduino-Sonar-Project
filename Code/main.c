#include <avr/io.h>
#include <util/delay.h>

extern	int sonic();

//Define Pins
#define R_PIN               5
#define G_PIN               3

//Define Led Pin controls
#define R_ON                (PORTB |= (1<<R_PIN))
#define R_OFF               (PORTB &= ~(1<<R_PIN))
#define G_ON                (PORTB |= (1<<G_PIN))
#define G_OFF               (PORTB &= ~(1<<G_PIN))

//Define Buzzer Pin controls
#define BUZZ_ON             (BUZZ_PORT |= (1<<BUZZ_PIN))
#define BUZZ_OFF            (BUZZ_PORT &= ~(1<<BUZZ_PIN))

//setup
#define LED_CONFIG          (DDRB |= (1<<5) | (1<<3))
#define CLOCK_PRESCALE(n)   (CLKPR = 0x80, CLKPR = (n))

//Function to decide what led should turn on
void led(int distance){
    //If sonar sensor distance is greater then 30cm toggle red led
    if (distance >= 5){
        R_ON;
        G_OFF;
    }
    else {
        R_OFF;
        G_ON;
    }
}

/Main function
int main(void) {
    int distance;
    LED_CONFIG;
    while(1) {
        distance = sonic();
        led(distance);
    }
    return 0;
}