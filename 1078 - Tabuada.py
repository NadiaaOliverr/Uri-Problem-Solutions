N = int (input())

while N not in range(2,10001):
    N = int (input())

i = 1;

while i <=10:
    tabuada = i * N
    print(i,'x',N,'=',tabuada)
    i+=1
