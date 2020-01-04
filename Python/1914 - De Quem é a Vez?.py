QT = int(input())

for i in range(QT):
    data = str(input())
    values = data.split(' ')
    number_one, number_two = input().split()
    number_one = int(number_one)
    number_two = int(number_two)
    soma = number_one + number_two
    if(soma % 2 == 0 and values[1]=='PAR'):
        print(values[0])
    elif(soma % 2 == 1 and values[1]=='IMPAR'):
        print(values[0])
    else:
        print(values[2])