# from decimal import Decimal   

# X = Decimal(input())
# print(f'+{X:.4e}'.upper())

# from decimal import Decimal
# import numpy as np 

# X = Decimal(input())

# number = np.format_float_scientific(np.float32(X),precision=4, sign=True)
# print(number.upper())

def entrada():
    x = float(input())
    return x

def impressao(numero):
    cont = 0
    if numero >= 1 and numero < 10:
        print('+{:.4f}E+00'.format(numero))
    elif numero > 0 and numero < 1:
        while numero < 1:
            cont += 1
            numero *= 10
        if cont < 10:
            print('+{:.4f}E-0{}'.format(numero,cont))
        else:
            print('+{:.4f}E-{}'.format(numero,cont))
    elif numero >= 10:
        while numero >= 10:
            cont += 1
            numero /= 10
        if cont < 10:
            print('+{:.4f}E+0{}'.format(numero,cont))
        else:
            print('+{:.4f}E+{}'.format(numero,cont))
    elif numero < -1 and numero > -10:
        print('-{:.4f}E+00'.format(abs(numero)))
    elif numero < 0 and numero > -1:
        numero = abs(numero)
        while numero < 1:
            cont += 1
            numero *= 10
        if cont < 10:
            print('-{:.4f}E-0{}'.format(numero,cont))
        else:
            print('-{:.4f}E-{}'.format(numero,cont))
    elif numero <= -10:
        numero = abs(numero)
        while numero >= 10:
            cont += 1
            numero /= 10
        if cont < 10:
            print('-{:.4f}E+0{}'.format(numero,cont))
        else:
            print('-{:.4f}E+{}'.format(numero,cont))
    elif numero == 0.0:
        if str(numero)[0] == '-':
            print('{:.4f}E+00'.format(numero))
        else:
            print('+{:.4f}E+00'.format(numero))


impressao(entrada())