N = int(input())

for i in range(N):
    cousin = int(input())
    count = 0
    for i in range(1,cousin+1):
        if cousin%i == 0:
            count+=1
    if count != 2:
        print('{0} nao eh primo'.format(cousin))
    elif count == 2:
        print('{0} eh primo'.format(cousin))
        