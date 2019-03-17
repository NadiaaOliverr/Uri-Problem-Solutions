i = 0
inter=0
gremio=0
empate=0
cont=0
while i != 2:
    x,y = input().split(" ")
    x = int(x)
    y = int(y)
    if x > y:
        inter+=1
    elif y > x:
        gremio+=1
    elif x==y:
        empate+=1
    print('Novo grenal (1-sim 2-nao)')
    i = int(input())
    cont+=1

print('%d grenais'%(cont))
print('Inter:%d'%(inter))
print('Gremio:%d'%(gremio))
print('Empates:%d'%(empate))
if inter>gremio:
    print('Inter venceu mais')
elif gremio>inter:
    print('Gremio venceu mais')
