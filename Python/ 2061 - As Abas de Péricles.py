N, M = map(int, input().split())
i = 1
acoes = []
while i <= M:
    acao = input()
    acoes.append(acao)
    i += 1

soma = N

for acao in acoes:
    if acao == 'fechou':
        soma += 1
    elif acao == 'clicou':
        soma -= 1 

print(soma)