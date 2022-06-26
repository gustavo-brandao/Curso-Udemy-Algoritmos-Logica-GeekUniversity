#include <stdio.h>

int main(){
    //Variáveis
    int n;

    //Entrada
    printf("Informe um numero: ");
    scanf("%d", &n);

    //Processamento
    if(n > 100){
        printf("%d", n);
    }else{
        n = 0;
        printf("%d", n);
    }
}