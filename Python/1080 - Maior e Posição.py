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


