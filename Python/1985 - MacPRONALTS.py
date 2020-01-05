p = int(input())
total = 0
numbers = []
for i in range(p):
    cod, quant = input().split(' ')
    cod = int(cod)
    quant = int(quant)
    if(cod == 1001):
        total = quant*1.50 
    elif(cod==1002):
        total = quant*2.50
    elif(cod==1003):
        total = quant*3.50
    elif(cod==1004):
        total = quant*4.50
    elif(cod==1005):
        total = quant*5.50    
    numbers.append(total)

for i in range(len(numbers)):
    numbers[i] = float(numbers[i])

print('{:.2f}'.format(sum(numbers)))