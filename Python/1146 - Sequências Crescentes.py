i = True
j=1
while i:
    X = int(input())
    if X == 0:
        break
    j = 1
    while j <= X:
        if j==X:
            print('%d'%(j),end="\n")
        else:
            print('%d'%(j),end=" ")
        j+=1
    
