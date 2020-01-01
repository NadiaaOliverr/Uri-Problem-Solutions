import math

A,B = input().split(' ')
A = int(A)
B = int(B)
if(B < 0): 
    division = math.ceil(A/B)
    B = B * (-1)
    rest = A % B
else:
    division = math.floor(A/B)
    rest = A % B
    
print('{0} {1}'.format(division,rest))
