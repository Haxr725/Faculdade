algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 08/03/2018
// Se��o de Declara��es 
var
a : vetor[1..5] de real
positivo,negativo : inteiro
i : inteiro
inicio
// Se��o de Comandos
positivo <- 0
negativo <- 0
para i de 1 ate 5 faca
leia(a[i])
se a[i] > 0 entao
positivo <- positivo + 1
senao
negativo <- negativo + 1
fimse
fimpara
escreval("A quantidade de numeros negativos �: ",negativo)
escreval("A quantidade de numeros positivos �: ",positivo)
fimalgoritmo
