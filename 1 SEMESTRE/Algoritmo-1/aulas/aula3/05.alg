algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 21/02/2018
// Se��o de Declara��es
var
    velocidade,tempo,distancia,combustivel : real

inicio
// Se��o de Comandos
//Recebe a velocidade media e tempo gasto
escreva("Informe a velocidade m�dia:")
leia(velocidade)
escreva("Informe o tempo gasto:")
leia(tempo)
//Calcula a distancia e o combustivel consumido
distancia <- tempo * velocidade
combustivel <- distancia / 12
//Apresenta a velocidade media,tempo,distancia e combustivel
escreva("A velocidade media �:",velocidade)
escreval()
escreva("O tempo gasto �:",tempo)
escreval()
escreva("A distancia percorrida �:",distancia)
escreval()
escreva("A quantidade de litros de combustivel usado na viagem �:",combustivel)

fimalgoritmo
