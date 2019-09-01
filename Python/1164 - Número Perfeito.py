N = int(input())

for i in range(N):
    soma = 0
    X = int(input())
    for i in range(1,X):
        if X % i == 0:
            soma+=i
    if soma == X:
        print('{0} eh perfeito'.format(X))
    else:
        print('{} nao eh perfeito'.format(X))