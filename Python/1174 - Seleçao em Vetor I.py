A = []
for i in range(100):
    value = float(input())
    A.insert(i,value)
for i in range(100):
    if A[i] <=10.0:
        print('A[{}] = {}'.format(i,A[i]))