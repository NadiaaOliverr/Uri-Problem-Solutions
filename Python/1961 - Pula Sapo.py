N, P = input().split(' ')
N = int(N)
P = int(P)

numbers = input().split(' ')
numbers = numbers[:P]

result = "YOU WIN"
for i in range(len(numbers)):
    numbers[i] = int(numbers[i])

for i in range(P - 1):
    
    dif = abs(numbers[i+1] -  numbers[i])
    
    if(dif > N):
        result = "GAME OVER"
        break

print(result)