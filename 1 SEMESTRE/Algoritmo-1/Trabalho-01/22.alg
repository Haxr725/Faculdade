algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 09/03/2018
// Se��o de Declara��es
var
 idade,qntd100,dv,maior,menor : inteiro
 soma,salario,media : real
 sexo : caractere
inicio
// Se��o de Comandos
escreval("Para encerrar o programa digite uma idade negativa")

escreval("Informe sua idade,sexo(f/m) e salario")
leia(idade)
se idade > 0 entao
   leia(sexo)
   leia(salario)
   se (sexo = "f") e (salario <= 100) entao
      qntd100 <- qntd100 + 1
   fimse
   soma <- soma + salario
   dv <- dv + 1
   maior <- idade
   menor <- idade
   enquanto idade > 0 faca
      leia(idade)
      se idade > 0 entao
         leia(sexo)
         leia(salario)
         se maior < idade entao
            maior <- idade
         fimse
         se menor > idade entao
            menor <- idade
         fimse
         se (sexo = "f") e (salario <= 100) entao
            qntd100 <- qntd100 + 1
         fimse
         soma <- soma + salario
         dv <- dv + 1
      fimse
   fimenquanto
fimse
se soma > 0 entao
   media <- soma/dv
   escreval("A maior idade � ",maior," e a menor idade � ",menor)
   escreval("A media salarial � ",salario)
   escreval("A quantidade de mulheres que recebem ate 100$ � ",qntd100)
fimse


fimalgoritmo
