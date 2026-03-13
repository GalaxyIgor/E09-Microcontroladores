#define ZeroZero 0
#define ZeroUm   1
#define UmZero   2
#define UmUm     3

int estado = ZeroZero;

void setup() {
  // Configura PD0 e PD1 como saída (D0 e D1 do Arduino)
  DDRD |= 0b00000011; 
}

void loop() {
  switch(estado) {
    case ZeroZero:
      PORTD = (PORTD & 0b11111100) | 0b00000000; // Escreve 00
      _delay_ms(500);
      estado = ZeroUm; 
      break;

    case ZeroUm:
      PORTD = (PORTD & 0b11111100) | 0b00000001; // Escreve 01
      _delay_ms(500);
      estado = UmZero;
      break;

    case UmZero:
      PORTD = (PORTD & 0b11111100) | 0b00000010; // Escreve 10
      _delay_ms(500);
      estado = UmUm;
      break;

    case UmUm:
      PORTD = (PORTD & 0b11111100) | 0b00000011; // Escreve 11
      _delay_ms(500);
      estado = ZeroZero; // Fecha o ciclo voltando ao início
      break;
  }

}