Seção 6 - Exercício 9

A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3
grupos de indústrias que são altamente poluentes do meio ambiente. O índice 
de poluição aceitável varia de 0,05 até 0,25. Se o índice sobe para 
0,3 as indústrias do 1o grupo são intimadas a suspenderem suas atividades, se o 
índice crescer para 0,4 as indústrias do 1o e 2o grupo são intimadas a 
suspederem suas atividades, se o índice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades.
Faça um algoritmo que leia o índice de poluição medido e emita a notificação adequada aos diferentes grupos de empresas.

receber poluicao
se (poluicao >= 0.3) and (poluicao < 0.4) então
    escrever "Grupo 1 suspender atividades"
se (poluicao >= 0.4) and (poluicao < 0.5) entao
    escrever "Grupo 1 e grupo 2 suspender atividades"
se (poluicao >= 0.5) entao
    escrever "Todos os Grupos suspender atividades"
senao
    escrever "Níveis aceitáveis"