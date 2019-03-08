'''
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.

Entrada
A entrada contém vários casos de teste. Cada caso contém dois valores inteiros X e Y. A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.

Saída
Para cada caso de teste imprima “Crescente”, caso os valores tenham sido digitados na ordem crescente, caso contrário imprima a mensagem “Decrescente”.

'''

X = []
Y = []
cont = 0
n = True

while n:
    a,b = input().split(" ")
    a = int(a)
    b = int(b)
    if a == b:
        n = False
        cont-=1
    else:
        X.append(a)
        Y.append(b)
    cont+=1

i = 0
while i < cont:
    if X[i] > Y[i]:
       print('Decrescente')
    elif X[i] < Y[i]:
        print('Crescente')
    i+=1


