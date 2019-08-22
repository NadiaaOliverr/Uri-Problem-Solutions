N = int(input())
cont = 0
a,b,c = 1,2,3
while cont < N:
    print('{0} {1} {2} PUM'.format(a,b,c))
    c+=2
    a = c
    b = c
    b+=1
    c+=2
    cont+=1
