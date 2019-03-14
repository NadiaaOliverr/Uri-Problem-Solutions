N = int(input())

for i in range(N):
    linha = [int (num) for num in input().split(" ")]
    X = min(linha) #o menor sempre em X
    Y = max(linha) 
    soma = 0
    for num in range(X+1,Y):
            if num%2==1:
                soma+=num
    print(soma)
