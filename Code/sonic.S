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
waiting:
        call            secondDelay
        inc             r21
        sbic            _PIND, ECHO
        rjmp            waiting
        clr		        r25
        mov		        r24, r21
        call            secondDelay
        ret
firstDelay:
        ldi             r18, 2
1:
        ldi             r19, 80
2:
        dec             r19
        brne            2b
        dec             r18
        brne            1b
        ret
secondDelay:
        ldi             r18, 100
5:
        ldi             r19, 58
6:
        ldi             r20, 16
7:
        dec             r20
        brne            7b
        dec             r19
        brne            6b
        dec             r18
        brne            5b
        ret

