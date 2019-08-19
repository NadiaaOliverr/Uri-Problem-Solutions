N = []
aux = []
for i in range(20):
    valor = int(input())
    N.append(valor)
    
j = 19    
for i in range(20):
    aux.append(N[i])
    if i >=10:
        N[i] = aux[j]
    else:
        N[i] = N[j]        
    j-=1

for i in range(20):
    print('N[{0}] = {1}'.format(i,N[i]))

