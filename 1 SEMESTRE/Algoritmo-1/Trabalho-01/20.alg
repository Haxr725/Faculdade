algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 09/03/2018
// Se��o de Declara��es
var
num,soma : inteiro
inicio
// Se��o de Comandos
escreval("Para encerrar o programa digite '0'")
escreval("===================================")
escreval("Informe o(s) numero(s): ")
escreval("===================================")
repita
   leia(num)
   se num < 0 entao
      soma <- soma + num
   fimse
ate num = 0
escreval("===================================")
escreval("A somatoria de numeros negativos �: ",soma)

fimalgoritmo
