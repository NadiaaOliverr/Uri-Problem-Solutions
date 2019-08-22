N = int(input())

i = 0

while i < N:
    x, y = input().split(" ")
    x = int(x)
    y = int(y)
    if y == 0:
        print('divisao impossivel')
    else:
        print('{0}'.format(x/y))
    i+=1
