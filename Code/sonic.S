#include "config.h"

	    .section        .text
	    .global		    sonic

sonic:

        sbi             _DDRD, TRIGGER
        cbi             _DDRD, ECHO
        cbi             _PORTD, TRIGGER
send:
        sbi             _PORTD, TRIGGER
        call            firstDelay
        cbi             _PORTD, TRIGGER
receive:
        clr             r21
