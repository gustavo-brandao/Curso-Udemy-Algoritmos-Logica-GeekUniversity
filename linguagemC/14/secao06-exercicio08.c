#include <stdio.h>

int main(){
    //Variáveis
    int numero;

    //Entradas
    printf("Informe um numero: ");
    scanf("%d", &numero);

    //Processamento
    if (numero % 2 == 0){
        if (numero > 0){
            printf("O numero %d eh par e positivo.", numero);
        }else{
            printf("O numero %d eh par e negativo.", numero);
        }
    }else{
        if (numero > 0){
            printf("O numero %d eh impar e positivo.", numero);
        }else{
            printf("O numero %d eh impar e negativo.", numero);
        }
    }


}