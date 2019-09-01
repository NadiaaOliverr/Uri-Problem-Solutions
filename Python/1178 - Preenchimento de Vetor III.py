x = float(input())
n = []
for i in range(100):
    if i == 0:
        aux = x
        n.insert(i,aux)
    else:
        aux = aux / 2
        n.insert(i,aux)    
for i in range(100):
    print('N[{0}] = {1:.4f}'.format(i,n[i]))