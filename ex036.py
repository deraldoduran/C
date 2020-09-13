

pv=float(input('digite o valor do imóvel'))
salario=float(input('digite o valor do seu salario bruto'))
anos=int(input('quantos anos de financiamento?'))
margemconsignavel=salario*0.3

i=float(input('a taxa de juros ao ano'))
cont= 0
pmt = pv * (((1 + i) ** anos * i) / ((1 + i) ** anos - 1))/100
a = pmt - i
sd = pv - a



if  margemconsignavel > pmt:
    print('parabéns seu emprestimo foi aprovado o valor final do imóvel é de  \033[32m {:.2f}\033[m'.format( pv))

    print('a parcela será de \033[31m {:.2f} \033[m, a amortização será de \033[32m {:.2f} \033[m, e o saldo será de \033[37m {:.2f} \033[m'.format(pmt, a, sd))
    for c in range(0,anos*12):
        pmt=sd=pmt-1
        a=pmt-1
        sd=pv-a
        print(pmt-1,a,sd-1,pv-a)
else:
    print('o seu salario de  \033[31m {:.2f} \033[m não permite pagamento de dívida de \033[31m {:.2f}'.format(salario,
                                                                                                               pmt))


