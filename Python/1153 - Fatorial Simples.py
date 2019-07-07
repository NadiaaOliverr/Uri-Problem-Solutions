def fatorial(N):
    if N==1:
        return N
    return fatorial(N-1) * N

N = int(input())
print(fatorial(N))
    
