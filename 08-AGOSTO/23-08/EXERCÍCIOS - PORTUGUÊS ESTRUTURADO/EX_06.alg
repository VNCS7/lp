algoritmo "EX_06"
// 6. Crie um algoritmo que receba o ano de nascimento de uma pessoal.
//Calcule e mostre a idade atual e quantos anos essa pessoa terá em 2050
var
an_atual,nascimento,id_atual,id_cinquenta: Inteiro
inicio
escreval ("Digite o Ano Atual: ")
leia (an_atual)
escreval ("Digite Data de Nascimento: ")
leia (nascimento)
id_atual <- an_atual - nascimento
escreval ("Sua Idade atual é", id_atual)
id_cinquenta <- 2050 - nascimento
escreval ("Em 2050 você terá", id_cinquenta)
fimalgoritmo
