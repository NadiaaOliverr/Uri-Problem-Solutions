'''Fazer um programa com a saída abaixo:
I=1 J=60
I=4 J=55
I=7 J=50
...
I=? J=0'''

J = 60
I=1
while J >= 0:
    print('I={0} J={1}'.format(I,J))
    I+=3
    J-=5
