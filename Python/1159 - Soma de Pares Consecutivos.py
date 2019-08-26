vector = []
X = int(input())
vector.append(X)
while X !=0:
    X = int(input())
    vector.append(X)

total = 0
for i in range(len(vector)-1):
    aux = 0
    j = 0
    total = vector[i]
    if total%2 != 0:
        total = vector[i] + 1
    else:
        aux = vector[i]  
    if vector[i] % 2 == 0:
        while j < 4:
            total = total + 2
            aux = total + aux    
            j = j + 1
    else:
        while j < 5:
            aux = total + aux
            total = total + 2
            j = j + 1
    print(aux)
            