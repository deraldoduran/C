velocidade=float(input('qual a velocidade'))

if velocidade >80:
    print('você foi multado, o valor da multa será{}'.format((velocidade-80)*7))
else:
    print('você é o cara')
