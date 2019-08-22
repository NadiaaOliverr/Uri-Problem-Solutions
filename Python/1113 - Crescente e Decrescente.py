X = []
Y = []
cont = 0
n = True

while n:
    a,b = input().split(" ")
    a = int(a)
    b = int(b)
    if a == b:
        n = False
        cont-=1
    else:
        X.append(a)
        Y.append(b)
    cont+=1

i = 0
while i < cont:
    if X[i] > Y[i]:
       print('Decrescente')
    elif X[i] < Y[i]:
        print('Crescente')
    i+=1


