// Exercicio 03
#include <stdio.h>

void analisar_valores(){
    int valor;
    int quant_impar = 0, quant_par = 0, quant_negativo = 0, quant_positivo = 0;
    
    for(int i=0; i<5; i++){
        scanf("%d", &valor);
        
        if(valor%2 == 0){
            quant_par++;
        }else{
            quant_impar++;
        }
        
        // Decidi incluir o 0 nos posivos ao inves de criar um nulo
        if(valor>=0){
            quant_positivo++;
        }else{
            quant_negativo++ ;  
        }
    }
    
    printf("Quantidade de numeros pares: %d\r\n", quant_par);
    printf("Quantidade de numeros impares: %d\r\n", quant_impar);
    printf("Quantidade de numeros positivos: %d\r\n", quant_positivo);
    printf("Quantidade de numeros negativos: %d\r\n", quant_negativo);
    
}

int main()
{
    int n;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        analisar_valores();
    }
    
    return 0;
}