
var=  's'
def consumoeletrico ():
    consumo = float
    potencia = float (input('qual é a potencia do aparelho'))
    horas = float (input('qual a quantidade de horas de funcionamento por dia'))
    valor = float (input('qual o valor od KWh'))
    consumo = ( potencia * horas)
    print('o número de kWh gastos é de {:.2f}pelo período, sua conta será{:.2f} no final do mês'.format(consumo,consumo*valor*30))


while var == 's':
    consumoeletrico()
    var = str(input('quer continuar digite s'))



