// Exercicio 02
#include <stdio.h>

int main()
{
    int n;
    
    while(1){
        scanf("%d", &n);
        
        if(n<=50 && n>=0){
            break;
        }
        
        printf("Erro: O valor deve estar entre 0 e 50!\n");
    }
    
    if (n <= 1) {
        printf("Nao existem antecessores maiores que 0 para o numero %d.\n", n);
    } else {
        for(int i=n-1; i>0; i--){
            int resultado = n % i;
            printf("Resto da divisao de 30 por %d: %d\n", i, resultado);
        }
    }
    
    return 0;
}