algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 01/03/2018
// Se��o de Declara��es 
var
classe : inteiro
pagar,comprar : real
inicio
// Se��o de Comandos 
EscrevaL("Informe a classe e o valor da compra")
leia(classe)
leia(comprar)
escolha classe
caso 1
     pagar <- compra
caso 2
     pagar <- comprar - comprar * 0.05
caso 3
     pagar <- comprar - comprar * 0.07
caso 4
     pagar <- comprar - comprar * 0.09
caso 5
     pagar <- comprar - comprar * 0.12
outrocaso
     escreval("nao tem desconto")
     pagar <- comprar
fimescolha
escreval("o valor a pagar � ",pagar)
fimalgoritmo
