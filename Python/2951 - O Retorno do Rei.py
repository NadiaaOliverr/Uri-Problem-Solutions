N, G = map(int, input().split())

i = 1
runa_valor_amizade = []

while i <= N:
    ri, vi = input().split()
    vi = int(vi)
    runa_valor_amizade.append(ri)
    runa_valor_amizade.append(vi)
    i+= 1

X = int(input())
recitadas = input().split()
recitadas = recitadas[:X]
soma = 0
for i in range(X):
    valor_a_ser_procurado = recitadas[i]
    encontrado = runa_valor_amizade.index(valor_a_ser_procurado)
    soma += runa_valor_amizade[encontrado + 1]

print(soma)
if soma >= G:
    print("You shall pass!")
else:
    print("My precioooous")