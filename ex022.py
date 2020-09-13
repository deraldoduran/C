frase='curso em vídeo python'

#fatiamento de string

#print(frase[9]) imprime a letra v

print(frase[9:13]) #imprime víde (do 9 ao 12)

print(frase[9:21]) #imprime vídeo python

print(frase[9:21:2]) #imprime do 9 ao 21 pulando de 2 em 2

print(frase[:5]) #imprime do 0 até o 5 (curso)

print(frase[15:]) #imprime 15 até o fim (python)

print(frase[9::3])#imprime do nove até o final pulando de 3 em 3 (veph)

#análise de string

print(len(frase)) #conta a quantidade de caracteres

print(frase.count('o'))# conta a quantidade de o
print(frase.count('o',0,14))#quantos o do 0 ao 13
print(frase.find('deo')) #indica a posição de início que é a 11
print('curso'in frase) #existe ele devolve true
print(frase.replace('python','android'))
frase.replace('android','python')
print(frase)
frase2=input('digite uma frase')

frase2.strip# retira os espaços digitados no início e no final muito importande
print(frase2)













