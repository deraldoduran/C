velocidade = float(input('qual a velocidade'))
multa = velocidade - 80
valormulta = float(multa / 10)
if velocidade<=80:
    print('voce e um bom condutor')


else:
    print('você pagara multa')
multa = velocidade - 80
valormulta = float(multa / 10)
if valormulta<0.5:
    valortotal=float(valormulta*20)
    print('sua multa será de  {}'.format(valortotal + 100))
else:
    valortotal=valormulta*100
    print('sua multa será de  {}'.format(valortotal +100))