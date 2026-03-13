// Igor GES603
#define ZeroUm   0
#define UmZero   1
#define ZeroZero 2

int estado = ZeroUm;

void setup() {
    // Configura PD0 e PD1 como SAÍDA
    DDRD |= 0b00000011; 
    
    // Configura PD2 como ENTRADA (Botão)
    DDRD &= ~(1 << DDD2);
    // Ativa Pull-up interno no PD2 (Botão liga no GND)
    PORTD |= (1 << PORTD2); 
}

void loop() {
    if (!(PIND & (1 << PIND2))) { 
        
        _delay_ms(50); 
        
        switch(estado) {
            case ZeroUm:
                PORTD = (PORTD & 0b11111100) | 0b01;
                estado = UmZero;
                break;

            case UmZero:
                PORTD = (PORTD & 0b11111100) | 0b10;
                estado = ZeroZero;
                break;

            case ZeroZero:
                PORTD = (PORTD & 0b11111100) | 0b00;
                estado = ZeroUm;
                break;
        }

        while (!(PIND & (1 << PIND2))); 
        _delay_ms(50);
    }
}

