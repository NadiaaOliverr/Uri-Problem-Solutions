T = int(input())
i = 0
answer = []

while i < T:
    R1,R2 = input().split(" ")
    R1 = int(R1)
    R2 = int(R2)
    answer.append(R1+R2)
    i+=1

for i in range(len(answer)):
    print(answer[i])



