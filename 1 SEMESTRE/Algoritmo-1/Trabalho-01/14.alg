algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 09/03/2018
// Se��o de Declara��es 
var
controle : caractere
soma,media,percentual_positivo,percentual_negativo : real
num,divisores,positivo,negativo,qntd_num : inteiro
inicio
// Se��o de Comandos 
enquanto controle <> "nao" faca
leia(num)
soma <- soma + num
divisores <- divisores + 1
se num < 0 entao
negativo <- negativo + 1
senao
positivo <- positivo + 1
fimse
qntd_num <- qntd_num + 1
escreval("Se quiser sair digite 'nao', se quer continuar digite 'sim'")
leia(controle)
fimenquanto
media <- soma / divisores
percentual_positivo <- 100 * positivo / qntd_num
percentual_negativo <- 100 * negativo / qntd_num
escreval("A quantidade de numeros negativos �: ",negativo," e o percentual �: ",percentual_negativo)
escreval("A quantidade de numeros positivos �: ",positivo," e o percentual �: ",percentual_positivo)
escreval("A media �: ",media)
fimalgoritmo
