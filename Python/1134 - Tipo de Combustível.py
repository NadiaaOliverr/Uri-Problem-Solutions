n = 0
alcool=gasolina=diesel = 0

while n != 4:
    n = int(input())
    while n < 1 and n > 4:
        n = int(input())
    if n == 1:
        alcool+=1
    elif n == 2:
        gasolina+=1
    elif n == 3:
        diesel+=1
print('MUITO OBRIGADO\nAlcool: {0}\nGasolina: {1}\nDiesel: {2}'.format(alcool,gasolina,diesel))

