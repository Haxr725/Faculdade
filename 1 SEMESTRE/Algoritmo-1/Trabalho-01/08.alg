algoritmo "semnome"
// Fun��o : Escreva um algoritmo que calcule a m�dia dos n�meros digitados pelo usu�rio, se eles forem pares. Termine a leitura se o usu�rio digitar zero (0).
// Autor :
// Data : 09/03/2018
// Se��o de Declara��es
var
media : real
divisores,num,soma : inteiro
inicio
// Se��o de Comandos
divisores <- 0
repita
   leia(num)
   se (num mod 2 = 0) entao
      soma <- soma + num
      se nao (num = 0) entao
         divisores <- divisores + 1
      fimse
   fimse
ate num = 0
media <- soma/divisores
escreval(media)
fimalgoritmo
