N = int(input())

multiple_two = 0
multiple_three = 0
multiple_for = 0
multiple_five = 0

values = input().split(' ')
values_correctly = values[:N]
for i in range(N):
    values_correctly[i] = int(values_correctly[i])
    if(values_correctly[i] % 2 ==0):
        multiple_two+=1
    if(values_correctly[i] % 3 ==0):
        multiple_three+=1
    if(values_correctly[i] % 4 ==0):
        multiple_for+=1
    if(values_correctly[i] % 5 ==0):
        multiple_five+=1

print('{0} Multiplo(s) de 2'.format(multiple_two))
print('{0} Multiplo(s) de 3'.format(multiple_three))     
print('{0} Multiplo(s) de 4'.format(multiple_for))     
print('{0} Multiplo(s) de 5'.format(multiple_five))     
