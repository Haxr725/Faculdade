algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 09/03/2018
// Se��o de Declara��es
var
n :vetor[1..150] de real
bonus : real
i : inteiro
inicio
// Se��o de Comandos
para i de 1 ate 150 faca
leia(n[i])
se n[i] < 500000 entao
   bonus <- 0.1 * n[i]
senao
   bonus <- 0.15 * n[i]
fimse
escreval("O bonus do cliente �: ",n[i]+bonus)
fimpara
fimalgoritmo
