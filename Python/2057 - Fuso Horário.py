hora_saida, tempo_viagem, fuso = map(int, input().split())

soma = sum([hora_saida, tempo_viagem, fuso])

if soma > 0 and soma < 24:
    print(soma)

elif soma > 24:
    soma = soma - 24
    print(soma)

elif soma < 0:
    soma = 24 + soma 
    print(soma)

elif soma == 24 or soma == 0:
    soma = 0
    print(soma)

