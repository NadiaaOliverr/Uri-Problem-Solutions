X = []
for i in range(10):
    if i == 0:
        value = int(input())
        aux = value
        X.insert(i,value)
    else:
        aux = aux * 2
        X.insert(i,aux)

for i in range(10):
    print('N[{0}] = {1}'.format(i,X[i]))
