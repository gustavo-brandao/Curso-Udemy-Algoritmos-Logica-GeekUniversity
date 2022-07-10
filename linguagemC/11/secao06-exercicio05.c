#include<stdio.h>

int main(){
    //Variáveis
    float p, m;
    char e[8] = "excesso"; // em C toda string finaliza com esse caracter '\0' por isso eu coloco 8 pq esse string finalizaria assim "excesso\0" - são 7 caracteres mais o /0

    //Entradas
    printf("Informe o peso dos peixes: ");
    scanf("%f", &p);

    //Processamento
    if (p > 50){
        m = (p - 50) * 4;
        //Saída caso tenha excesso de peso
        printf("Voce devera pagar R$ %.2f em multas.", m);
    }else{
        m = 0;
        e[0] = 0;
        //Saídas caso não tenha excesso de peso
        printf("Multas: %.2f\n", m);
        printf("Excesso: %d", e[0]);
    }
}