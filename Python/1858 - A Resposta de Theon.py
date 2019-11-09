N = int(input())
X = input().split()

for i in range(N):
    X[i] = int(X[i])

minimum = min(X)
result = X.index(minimum) + 1

print(result)
