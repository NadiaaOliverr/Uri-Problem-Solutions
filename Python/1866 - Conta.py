C = int(input())

while(C > 0):
    N = int(input())
    vector = []

    for i in range(N):
        if i%2 == 0:
            vector.append(1)
        else:
            vector.append(-1)

    print(sum(vector))
    C -= 1