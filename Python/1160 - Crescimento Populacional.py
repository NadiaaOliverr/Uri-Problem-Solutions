T = int(input())
vector = []
for i in range(T):
    count = 0
    PA,PB,G1,G2 = input().split(" ")
    PA = int(PA)
    PB = int(PB)
    G1 = float(G1)
    G2 = float(G2)
    percentA = ((PA * G1 )//100) + PA
    percentB = ((PB * G2 )//100) + PB
    percentA = int(percentA)
    percentB = int(percentB)
    while percentA<=percentB:
        percentA = ((percentA * G1 )//100) + percentA
        percentB = ((percentB * G2 )//100) + percentB
        count+=1
        if count > 100:
            break
    count+=1 
    vector.append(count)

for i in range(T):
    if vector[i]>100:
        print('Mais de 1 seculo.')
    else:
        print('{0} anos.'.format(vector[i]))