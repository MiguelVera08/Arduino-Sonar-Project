; I/O ports -------------------------------------
; PORTB --------------------------------------
; PINB: 0x03 (0x23)
#define _PINB   _SFR_IO_ADDR(PINB)
; DDRB: 0x04 (0x24)
#define _DDRB   _SFR_IO_ADDR(DDRB)
; PORTB: 0x05 (0x25)
#define _PORTB  _SFR_IO_ADDR(PORTB)
; PORTC --------------------------------------
# PINC: 0x06 (0x26)
#define _PINC _SFR_IO_ADDR(PINC)

; PORTD --------------------------------------
; PIND: 0x09 (0x29)
#define _PIND   _SFR_IO_ADDR(PIND)
; DDRD: 0x0A (0x2A)
#define _DDRD   _SFR_IO_ADDR(DDRD)
; PORTD: 0x0B (0x2B)
#define _PORTD  _SFR_IO_ADDR(PORTD)

; Timer 0 ---------------------------------------
; TIFR0: 0x15 (0x25)
#define _TIFR0    _SFR_IO_ADDR(TIFR0)
; TCCR0A: 0x24 (0x44)
#define _TCCR0A    _SFR_IO_ADDR(TCCR0A)
; TCCR0B: 0x25 (0x45)
#define _TCCR0B    _SFR_IO_ADDR(TCCR0B)
; TCNT0: 0x26 (0x46)
#define _TCNT0    _SFR_IO_ADDR(TCNT0)
; OCR0A: 0x27 (ox47)
#define _OCR0A    _SFR_IO_ADDR(OCR0A)
; OCR0B: 0x28 (0x48)
#define _OCR0B    _SFR_IO_ADDR(OCR0B)
