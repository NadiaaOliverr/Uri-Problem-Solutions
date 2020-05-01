from collections import defaultdict

N = int(input())

i = 1
# comitiva = {
#     'anoes': 0,
#     'elfos': 0,
#     'humanos': 0,
#     'magos': 0,
#     'hobbits': 0
# }

comitiva = {}

comitiva = defaultdict(lambda : 0, comitiva) # Ele fornece um valor padrão para a chave que não existe.

while i <= N:
    nome_raca, tipo = map(str, input().split())
    if tipo == 'A':
        comitiva['anoes'] += 1
    if tipo == 'E':
        comitiva['elfos'] += 1
    if tipo == 'H':
        comitiva['humanos'] += 1
    if tipo == 'M':
        comitiva['magos'] += 1
    if tipo == 'X':
        comitiva['hobbits'] += 1

    i += 1

print("{} Hobbit(s)\n{} Humano(s)\n{} Elfo(s)\n{} Anao(s)\n{} Mago(s)".format(comitiva['hobbits'],comitiva['humanos'],comitiva['elfos'], comitiva['anoes'], comitiva['magos']))