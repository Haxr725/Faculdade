algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 09/03/2018
// Se��o de Declara��es
var
codigo : inteiro
preco_novo,preco_antigo,soma_antigo,soma_novo : real
k : inteiro
inicio
// Se��o de Comandos
codigo <- 1
enquanto codigo >= 0 faca
   escreval("Informe o codigo do produto")
   leia(codigo)
   se codigo > 0 entao
      escreval("Informe o pre�o antigo do produto")
      leia(preco_antigo)
      preco_novo <- (preco_antigo * 0.2) + preco_antigo)
      escreval("O pre�o novo do produto �",preco_novo," reais")
      soma_antigo <- soma_antigo + preco_antigo
      soma_novo <- soma_novo + preco_novo
      k <- k + 1
   fimse
fimenquanto
se soma_antigo > 0 entao
   escreval("A media dos pre�os antigo dos produtos ",soma_antigo / k," reais")
   escreval("A media dos pre�os novo dos produtos ",soma_novo / k," reais")
fimse
fimalgoritmo

