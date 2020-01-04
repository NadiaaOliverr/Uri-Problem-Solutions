A,B,C,D = input().split()
A = int(A)
B = int(B)
C = int(C)
D = int(D)

#Formas de ter um triângulo
# A,B,C 
# A,B,D
# A,C,D
# B,C,D

if A < B + C and B < A + C and C < A + B:
    print('S')
elif A < B + D and B < A + D and D < A + B:
    print('S')
elif A < C + D and C < A + D and D < A + C:
    print('S')
elif B < C + D and C < B + D and D < B + C:
    print('S')
else:
    print('N')
