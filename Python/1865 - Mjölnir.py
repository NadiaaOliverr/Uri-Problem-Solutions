C = int(input())
i = 0
answer = []

while i < C:
    Name,N =  input().split(" ")
    Name = str(Name)
    N = int(N)
    if Name == 'Thor':
        answer.append("Y")
    else:
        answer.append("N")
    i+=1

for i in range(len(answer)):
    print(answer[i])
