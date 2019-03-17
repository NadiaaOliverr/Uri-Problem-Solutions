nota_valida = 0
x=0
media=0
while nota_valida!=2:
    x = float(input())
    if x>=0 and x<=10:
        media+=x/2
        nota_valida+=1
    else:
        print('nota invalida')


print('media = %.2f'%(media))

