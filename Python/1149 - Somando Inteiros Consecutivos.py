X = input().split(" ")
A = int(X.pop(0))

for z in X:
    if (int(z)>0):
        N = int(z)
        break

soma = 0
for i in range(N):
    soma+=(A+i)

print(soma)
