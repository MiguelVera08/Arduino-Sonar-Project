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