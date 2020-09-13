def parcela (a,n,i) :

    return a*(((1+i)**n*i)/((1+i)**n-1))/100



pv=float(input('valor imóvel'))
n=int(input('número de anos'))
i=float(input('taxa de juros'))
for x= int in range(n*12,parcela(pv,n,i)-pv):
    y=x+y

print (parcela(pv,n,i),y)
