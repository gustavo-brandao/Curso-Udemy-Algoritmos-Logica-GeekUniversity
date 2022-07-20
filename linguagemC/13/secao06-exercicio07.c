#include <stdio.h>

int main(){
    //Variáveis
    int num1, num2, num3, num4, q1, q2, q3, q4;

    //Entradas
    printf("Informe o numero 1: ");
    scanf("%d", &num1);
    printf("Informe o numero 2: ");
    scanf("%d", &num2);
    printf("Informe o numero 3: ");
    scanf("%d", &num3);
    printf("Informe o numero 4: ");
    scanf("%d", &num4);

    //Processamentos
    q1 = num1 * num1;
    q2 = num2 * num2;
    q3 = num3 * num3;
    q4 = num4 * num4;

    if(q3 >= 1000){
        printf("%d", q3);
    }else{
        printf("Numero 1: %d, Quadrado: %d\n", num1, q1);
        printf("Numero 2: %d, Quadrado: %d\n", num2, q2);
        printf("Numero 3: %d, Quadrado: %d\n", num3, q3);
        printf("Numero 4: %d, Quadrado: %d\n", num4, q4);
    }
}