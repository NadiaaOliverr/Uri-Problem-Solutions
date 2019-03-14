'''Fazer um programa conforme a saída abaixo:
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=7
I=3 J=6
I=3 J=5
...
I=9 J=7
I=9 J=6
I=9 J=5 '''

I = 1
J = 7
cont = 0

while cont < 3 and I < 11:
    print('I={0} J={1}'.format(I,J))
    cont+=1
    J-=1
    if J == 4:
        J = 7
        cont = 0
        I+=2
