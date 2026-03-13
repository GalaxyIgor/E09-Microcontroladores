#define LED_G 3
#define LED_R 2
#define LED_Y 4 


 unsigned int estado = 0; 


void setup() {
 
  pinMode(LED_R, OUTPUT); 

  pinMode(LED_G, OUTPUT); 

  pinMode(LED_Y, OUTPUT); 

}

void loop() {

    switch (estado)
    {
      case 1:
        digitalWrite(LED_G,HIGH); 
        _delay_ms(12000);

        break;

      case 2: 
        digitalWrite(LED_G,LOW); 
        digitalWrite(LED_Y,HIGH); 
        _delay_ms(3000); 

        break;


      case 3: 
        digitalWrite(LED_Y,LOW); 
        digitalWrite(LED_R,HIGH); 
        _delay_ms(15000); 

        break; 
    }

}
