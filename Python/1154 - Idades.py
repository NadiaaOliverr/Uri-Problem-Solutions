comeco = True
i = 0
j = 0
soma = 0
vet_idade = []
while comeco:
    idade = int(input())
    if idade >= 0:
     vet_idade.append(idade)
    else:
        comeco = False
    i+=1


while j < (i-1):
    soma+=vet_idade[j]
    j+=1

print('{:.2f}'.format(soma/(i-1)))  #Formatando para duas casas decimais  
