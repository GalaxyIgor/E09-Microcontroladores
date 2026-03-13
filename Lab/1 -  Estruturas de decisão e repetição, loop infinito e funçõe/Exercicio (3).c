// Exercicio 01
#include <stdio.h>

int main()
{
    float peso1 = 0.8;
    float peso2 = 0.65;
    
    int quant_frutas;
    float resultado;
    
    scanf("%d", &quant_frutas);
    
    if(quant_frutas < 12){
        resultado = quant_frutas * peso1;
        printf("Preco da unidade: R$0.80\r\nPreco total: R$%.2f", resultado);
        
    }
    else if(quant_frutas >= 12){
        resultado = quant_frutas * peso2;
        printf("Preco da unidade: R$0.65\r\nPreco total: R$%.2f", resultado);
    }
    
    return 0;
}