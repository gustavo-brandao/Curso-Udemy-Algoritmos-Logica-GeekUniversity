Seção 6 - Exercício 6

Elabore um algoritmo que leia as variáveis 'c' e 'n', respectivamente código e número de horas trabalhadas de um operário.
Calcule o salário sabendo-se que ele ganha R$ 10,00 por hora.
Quando o número de horas exceder a 50 calcule o excesso de pagamento armazenando-o na variável 'e'.
Caso contrário zerar tal variável.
A hora excedente de trabalho vale R$ 20,00. 
No final do processamento imprimir o salário total e o salário excedente.

e = 0
receber c
receber n
se n > 50 então
    e = n - 50
    n = n - e
extra = e * 20
salario = n * 10
escreva "Salário " + salario
escreva "Extra " + extra