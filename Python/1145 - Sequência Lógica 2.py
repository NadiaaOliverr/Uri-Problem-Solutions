X,Y = input().split(" ")
X = int(X)
Y = int(Y)
i=1
linha = 0
while i <=Y:
    if linha < (X-1):
        print('%d'%(i),end=" ")
        linha+=1
    elif linha==(X-1): #Para não haver espaço em branco no último número
        print('%d'%(i))
        linha+=1
    else:
        i-=1 #Para que não perca um número de iteração quando entrar aqui
        #e volte para o estado que estava anteriormente
        linha = 0
    i+=1
