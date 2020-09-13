cont=1
while cont==1:
    num1=int(input('digite um número'))
    num2=int(input('digite outro número'))

    if num1>num2:
        print('número 1 {}, maior que número 2 {}'.format(num1, num2))
    elif num2>num1:
        print('número 2 {} é maior que o número 1 {}'. format(num2, num1))
    else:
        print('são números iguais')

cont=(input('digite 1 pra continuar, outro qualquer para parar'))