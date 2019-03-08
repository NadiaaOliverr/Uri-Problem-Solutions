'''Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo. Caso não for possível mostre a mensagem “divisao impossivel” para os valores em questão.'''

N = int(input())

i = 0

while i < N:
    x, y = input().split(" ")
    x = int(x)
    y = int(y)
    if y == 0:
        print('divisao impossivel')
    else:
        print('{0}'.format(x/y))
    i+=1
