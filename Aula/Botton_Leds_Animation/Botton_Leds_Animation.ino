int main() {
  //CONFIGURAÇÕES:
  DDRC = 255;          //OU DDRC = 0b11111111;  OU DDRC = 0xFF;
  PORTC = 0;           // TODOS OS LEDS APAGADOS
  PORTD = 0;           // Todos do PORTD como entradas
  DDRD |= (1 << PD0);  // Liga o PULL-Up no PD0
  char cont;
  char cont2 = 0;
  while (1) {
    if (!(PIND & (1 << PD0))) {
      cont2++;
    }
    if (cont2 == 0) {
      for (cont = 0; cont < 3; cont++) {
        //---------- LÓGICA 1 ---------------
        PORTC |= (1 << PC0) | (1 << PC2) | (1 << PC4);
        _delay_ms(500);
        PORTC = 0;  //DESLIGA TODOS OS LEDS
        PORTC |= (1 << PC1) | (1 << PC3) | (1 << PC5);
        _delay_ms(500);
        PORTC = 0;  //DESLIGA TODOS OS LEDS
                    //-----------------------------------
      }
    } else if (cont2 == 1) {
      for (cont = 0; cont < 3; cont++) {
        //---------- LÓGICA 2 ---------------
        PORTC |= (1 << PC0);
        _delay_ms(200);
        PORTC |= (1 << PC1);
        _delay_ms(200);
        PORTC |= (1 << PC2);
        _delay_ms(200);
        PORTC |= (1 << PC3);
        _delay_ms(200);
        PORTC |= (1 << PC4);
        _delay_ms(200);
        PORTC |= (1 << PC5);
        _delay_ms(800);
        PORTC = 0;
      }
    } else if (cont2 == 2) {
      //---------- LÓGICA 3 ---------------
      for (cont = 0; cont < 3; cont++) {
        PORTC |= (1 << PC2);
        _delay_ms(800);
        PORTC |= (1 << PC3);
        _delay_ms(200);
        PORTC |= (1 << PC5);
        _delay_ms(500);
        PORTC |= (1 << PC0);
        _delay_ms(200);
        PORTC |= (1 << PC4);
        _delay_ms(100);
        PORTC |= (1 << PC1);
        _delay_ms(800);
        PORTC = 0;
      }
    }
  }
}