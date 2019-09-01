N = int(input())
X = list(map(int, input().split()))
smaller = min(X)
position = X.index(smaller)

print('Menor valor: {0}\nPosicao: {1}'.format(smaller,position))