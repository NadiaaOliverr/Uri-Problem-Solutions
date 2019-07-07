N  = int(input())

V1 = [0]*N

for i in range (0,N):
    if i <= 1:
        V1[i] = i
    else:
        V1[i] = V1[i-1] + V1[i-2]

    if i==N-1:
        print('%d'%(V1[i]),end='')
    else:
        print('%d'%(V1[i]),end=' ')
    
print() #Quebra de linha 
