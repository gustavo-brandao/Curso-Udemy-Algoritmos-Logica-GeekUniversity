#include <stdio.h>

int main(){
    //Variáveis
    int numero, p = 0, i = 0;

    //Entradas
    printf("Informe um numero: ");
    scanf("%d", &numero);

    //Processamento
    if (numero % 2 == 0){
        p = numero;
    }else{
        i = numero;
    }
    printf("%d\n", p);
    printf("%d", i);
}