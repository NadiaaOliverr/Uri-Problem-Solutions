'''Escreva um programa que leia um valor inteiro N (1 < N < 1000). Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.'''

N = int(input())

i = 1

while i <= N:
    print('{0} {1} {2}'.format(i,i*i,i**3))
    i+=1
