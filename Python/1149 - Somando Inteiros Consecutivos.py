A,N = input().split(" ")
A = int(A)
N = int(N)


while N<=0:
    N = int(input())
    

soma = 0

for i in range(N):
   soma+=(A+i)

print(soma)
