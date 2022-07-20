#include <stdio.h>

int main(){
    //Variáveis
    int c;
    float n, e = 0, salario, salario_total, valor_hora = 10;

    //Entradas
    printf("Informe o codigo: ");
    scanf("%d", &c);
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%f", &n);

    //Processamento
    if(n > 50){
        e = (n - 50) * 20.00;
        salario = (50 * valor_hora);
        salario_total = (50 * valor_hora) + e;

        //Saídas
        printf("Salario R$ %.2f\n", salario);
        printf("Salario excedente R$ %.2f\n", e);
        printf("Salario Total R$ %.2f", salario_total);
    }else{
        salario = n * valor_hora;
        //Saídas
        printf("Salario Total R$ %.2f\n", salario);
        printf("Salario excedente R$ %.2f", e);
    }
}