num=0

#print('se quiser converter para:')
#print('[1] para binario')
#print('[2] para octal')
#print('[3] para hexadecimal')
opcao=int
cont=1
while cont==1:
    num = int(input('digite um número inteiro'))

    print('se quiser converter para:')
    print('[1] para binario')
    print('[2] para octal')
    print('[3] para hexadecimal')
    opcao = int(input('digite uma opção'))
    if opcao ==1:
        print('o valor {}, será de {} em binario'.format(num, bin(num)[2:]))
    elif opcao ==2:
        print('{} é {} em octal'.format(num, oct(num)[2:]))
    elif opcao ==3:
        print('{} será {} em hexadecimal'.format(num, hex(num)[2:]))
    else:
         print('opção inválida')

    cont=int(input('quer continuar digite 1, se não 2'))