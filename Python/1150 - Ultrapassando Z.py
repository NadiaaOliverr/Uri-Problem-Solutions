X = int(input())
Z = int(input())
count = 0
j = 1
while Z <= X:
    Z = int(input())

count =  X
j = 1
aux = count
times = 0
while aux < Z:
    count = count + j
    #print('count: ' + str(count))
    aux = count + aux
    #print(aux)
    times +=1

print(times+1)
    