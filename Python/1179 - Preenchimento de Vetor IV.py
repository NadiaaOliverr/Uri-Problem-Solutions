par = []
impar = []
n = []
j = 0
k = 0
count=0
for i in range(15):
    x = int(input())
    n.insert(i,x)
    if j < 5:
        if n[i] % 2 == 0:
            par.insert(j,n[i])
            j+=1
    if k < 5 and n[i] % 2 != 0:
        impar.insert(k,n[i])
        k+=1  
    if j == 5:
        for i in range(5):
            print('par[{0}] = {1}'.format(i,par[i]))
            count +=1
        j = 0
    if k == 5:
        for k in range(5):
            print('impar[{0}] = {1}'.format(k,impar[k]))
            count +=1
        k = 0
    if i == 14:
        if count != 15:
            for i in range(len(impar)-5):
                print('impar[{0}] = {1}'.format(i,impar[i]))
            for i in range(len(par)-5):
                print('par[{0}] = {1}'.format(i,par[i]))
            