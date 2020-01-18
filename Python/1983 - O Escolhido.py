n = int(input())
matricula = []
nota = []

for i in range(n):
    mtr,nt = input().split(' ')
    mtr = int(mtr)
    nt = float(nt)
    matricula.append(mtr)
    nota.append(nt)
    
indice_maior_nota = nota.index(max(nota))
if(nota[indice_maior_nota]<8):
    print("Minimum note not reached")
else:
    print(matricula[indice_maior_nota])