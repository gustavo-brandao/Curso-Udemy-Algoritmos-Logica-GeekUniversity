#include <stdio.h>

int main(){
    //Variáveis
    int numero, a, b;

    //Entradas
    printf("Informe um numero: ");
    scanf("%d", &numero);

    //Processamento
    if (numero > 0){
        a = numero;
        printf("O numero %d eh positivo.", numero);
    }else{
        b = numero;
        printf("O numero %d eh negativo.", numero);
    }
}