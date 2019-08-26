i = 3
j = 2
S = 1
while i <= 39:
    S = S + i/j
    i+=2
    j*=2

print('{:.2f}'.format(S))