vetor = []
i = 0
maior = 0

for i in range(100):
    x = int(input())
    vetor.append(x)
    if vetor[i]>maior:
        maior = vetor[i]
        posicao = i+1

    
print(maior)
print(posicao)

'''
lista=[]
n=0
for i in range(100):
  lista.append(int(input()))
  x=(max(lista))
  y=(lista.index(x)) # pega a posição do valor x
print(x)
print(y+1)'''

