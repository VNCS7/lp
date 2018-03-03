algoritmo "EX_10"
// 10. Crie um algoritmo que controle uma conta poupança que foi aberta com um depósito de
//R$500,00. Sendo a remuneração de 1% ao mês de juros. Apresente o saldo após três meses
var
sal_ini,qt_mes,sal_mes1,sal_mes2,sal_mes3 :real
inicio
     sal_ini <- 500
     sal_mes1 <- (sal_ini+(sal_ini*0.01))
escreval ("Saldo após um mês será de R$: ", sal_mes1)
     sal_mes2 <- (sal_mes1+(sal_mes1*0.01))
escreval ("Saldo após dois meses será de R$: ", sal_mes2)
     sal_mes3 <- (sal_mes2+(sal_mes2*0.01))
escreval ("Saldo após três meses será de R$: ", sal_mes3)



fimalgoritmo
