salario =float(input('digite seu salario'))

if salario <= 1250:
    print('seu aumento será de 15%  {}'.format(salario*0.15+salario))

else:
    print('seu salario aumentara 10%  {}'.format(salario*0.10+salario))

