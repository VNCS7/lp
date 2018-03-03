algoritmo "EX_09"
// 9. Crie um algoritmo que calcule o salário líquido sabendo que cada um dependente
//, este recebe R$300,00 de bônus. O valor do seu salário bruto é: Valor Hora * Horas Trabalhadas no Mês
//. A aplicação irá coletar o número de Dependentes, Valor Hora, Hora Trabalhada e apresentará o Valor Bruto
// e Valor Liquido
var
vl_hr,sl_bru,sl_liq: real
n_dep,hr_tra: inteiro
inicio
      escreval ("Insira o número de dependentes: ")
      leia (n_dep)
      escreval ("Insira o valor da hora trabalhada: ")
      leia (vl_hr)
      escreval ("Insira a quantiade de Horas Trabalhadas no mês: ")
      leia (hr_tra)

sl_bru <- (vl_hr*hr_tra)
sl_liq <- (sl_bru+n_dep*300)

      escreval ("Salário bruto é igual a: R$", sl_bru)
      escreval ("Salário líquido é igual a: R$", sl_liq)
fimalgoritmo
