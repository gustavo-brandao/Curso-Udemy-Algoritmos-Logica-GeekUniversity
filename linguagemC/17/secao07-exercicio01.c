#include <stdio.h>

int main(){
    //variáveis
    int n, maior = 0;

    //Entradas
    printf("Informe um numero: ");
    scanf("%d", &n);

    //Processamento
    while (n != 0){
        if (n > maior){
            maior = n;
        }
        //Entradas
        printf("Informe um numero: ");
        scanf("%d", &n);
        
    }
    printf("O maior numero eh %d", maior);
    
}