//config.h - pin assignments for this project

#include <avr/io.h>
#include "PORT_CONFIG.inc"

#define TRIGGER     2
#define TRIG_DIR    DDRD
#define TRIG_PORT   PORTD

#define ECHO        4
#define ECHO_DIR    DDRD
#define ECHO_PORT   PORTD

#define _(s)    _SFR_IO_ADDR(s)