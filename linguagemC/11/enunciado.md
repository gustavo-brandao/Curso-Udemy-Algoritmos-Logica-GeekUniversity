Seção 6 - Exercício 5

João da Silva, pescador, comprou um microcomputador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do Estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.
João precisa que você faça um algorítmo que leia a variável 'p' (peso de peixes) e verifique se há excesso. Se houver, gravar na variável 'e' (excesso) e na variável 'm' o valor da multa que João deverá pagar. Caso contrário mostrar tais variáveis com o conteúdo 'zero'.

e = 0
m = 0
receber peso
se peso > 50 então
    e = peso - 50
    m = e * 4
escrever "Peso: " + peso
escrever "Excesso: " + e
escrever "Multa: " + m