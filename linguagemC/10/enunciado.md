Seção 6 - Exercício 4

Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algorítmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
Para homens: (72.7 * altura) - 58
Para mulheres: (62.1 * altura) - 44.7

receber altura
receber sexo
se sexo == 'M' or sexo == 'm' então
    peso_ideal = (72.7 * altura) - 58
se sexo == 'F' or sexo == 'f' então
    peso_ideal = (62.1 * altura) - 44.7
escrever peso_ideal