algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 21/02/2018
// Se��o de Declara��es
var
    entrada,grau,minuto,segundo : inteiro
inicio
// Se��o de Comandos
//recebe a quantidade em segundos
escreva("Informe a quantidade em segundos:")
leia(entrada)
//Converte a quantidade para grau,minuto e segundo
grau <- entrada div 3600
minuto <- (entrada mod 3600) div 60
segundo <- entrada mod 60
//Apresenta o resultado da conversao
escreva("A quantidade em grau,minuto e segundo �:",grau,minuto,segundo)
fimalgoritmo
