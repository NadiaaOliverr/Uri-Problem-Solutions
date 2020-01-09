A, B = input().split(' ')
A = float(A)
B = float(B)

rate = B * 100
result_rate = rate / A
print('{:.2f}%'.format(result_rate-100))