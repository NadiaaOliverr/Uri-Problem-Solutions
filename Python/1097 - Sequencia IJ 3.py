''' Codifique um programa com esta saída
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
...
I=9 J=15
I=9 J=14
I=9 J=13'''

I = 1
J = 7
cont = 0
inicial = 7

while cont < 3 and I < 11:
    print('I={0} J={1}'.format(I,J))
    J-=1
    if J==(inicial-3):
        I+=2
        inicial+=2
        J = inicial
        
