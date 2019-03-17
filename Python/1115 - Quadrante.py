acaba = False

while not acaba:
    X,Y = input().split()
    Y = int(Y)
    X = int(X)
    if X == 0 or Y == 0:
        acaba = True
    if X>0 and Y > 0 and not acaba:
         print('primeiro')
    elif X> 0 and Y < 0 and not acaba:
         print('quarto')
    elif X < 0 and Y< 0 and not acaba:
         print('terceiro')
    else:
        if not acaba:
        print('segundo')
         
    
