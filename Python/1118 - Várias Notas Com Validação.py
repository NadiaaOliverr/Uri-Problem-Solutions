i = 1
j = 0
soma= 0.0
while i != 2:
    nota = float(input())
    if nota>=0.0 and nota<=10.0:
        nota/=2
        soma+=nota
        j+=1
    if j==2:
        print('media = %.2f'%(soma))
        print('novo calculo (1-sim 2-nao)')
        i = int(input())
        if i == 1 or i ==2:
            aux = True
        else:
            aux = False
        while not aux:
             print('novo calculo (1-sim 2-nao)')
             i = int(input())
             if i == 1 or i ==2:
                aux = True
             else:
               aux = False
        j = 0
        soma=0
    if nota<0 or nota>10:
        print('nota invalida')
   
    
