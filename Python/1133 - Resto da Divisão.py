X = int(input())
Y = int(input())

if Y < X:
    aux = X
    X = Y
    Y = aux

for i in range(X+1,Y):
    if i%5==2 or i%5==3:
        print(i)
        
