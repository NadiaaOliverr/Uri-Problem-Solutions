soma = 0
j=0
while j != 1:
    M,N = input().split(" ")
    M = int(M)
    N = int(N)
    soma = 0
    if M > N:
        aux = M
        M = N
        N = aux
    if M<=0 or N<=0:
        j = 1
    if j!=1:
        for i in range(M,N+1):
            print('%d '%(i),end="")
            soma+=i
            if i == N:
                print('Sum=%d'%(soma))
    
    
