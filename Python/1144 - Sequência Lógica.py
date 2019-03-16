import math
N = int(input())
aux1= 0
i = 1
linha=0
while i < (N*2):
    aux1 = i
    if linha%2==1:
        resto1=math.pow(aux1,2)
        resto2=math.pow(aux1,3)
        print('%d %d %d'%(aux1,resto1,resto2)) 
    linha+=1
    if linha%2==0:
        print('%d %d %d'%(aux1,resto1+1,resto2+1))
        i+=1
    if i==N+1:
        i=(N*2)
        

    
