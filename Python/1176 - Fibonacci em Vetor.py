fib = [0,1]
f0 = 0
f1 = 1
for i in range(60):
    t = f1 + f0
    fib.append(t)
    f0 = f1
    f1 = t
T = int(input())
for i in range(T):
    N=int(input())
    print('Fib(%d) = %d' %(N, fib[N]))