kmrodado=int (input('quantos kms você vai rodar'))

if kmrodado<=200:
    tarifa=kmrodado*0.45

else:
    tarifa=kmrodado*0.5

print('o valor da tarifa será{}'.format(tarifa))