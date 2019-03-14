N = float(input())

cont = 0
i = 0
media_ponderada = []
while cont < N:
    x,y,z = input().split(" ")
    x = round(float(x),2)
    y = round(float(y),2)
    z = round(float(z),2)
    media_ponderada.append(((x * 2 ) + ( y * 3 ) + (z * 5 ))/(2+3+5))
    cont+=1
    
while i < N:
    print('{:.1f}'.format(media_ponderada[i]))
    i+=1
