algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 09/03/2018
// Se��o de Declara��es
var
num : real
controle : inteiro
inicio
// Se��o de Comandos
escreval("Para encerrar o programa digite 0")
escreval("=================================")
escreval("Numero   Quadrado   Cubo   Raiz quadrada")
repita
   se controle >= 20 entao
      escreval()
      escreval("========================================")
      escreval("Numero   Quadrado   Cubo   Raiz quadrada")
      controle <- 0
   fimse
   leia(num)
   se num > 0 entao
   escreval("        ",num^2,"         ",num^3,"      ",raizq (num):2:1)
   controle <- controle + 1
   fimse
ate num = 0
fimalgoritmo

