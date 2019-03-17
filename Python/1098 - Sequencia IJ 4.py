I = 0
J = 1
aux = 0.2
for i in range(11):
  for j in range(3):
    if I == 0:
      print("I=%d J=%d" %(I, J))
    elif I == 1:
      print("I=%d J=%d" %(I, J))
    elif I > 1.9:
      print("I=%d J=%d" %(2, J))
    else:
      print("I=%.1f J=%.1f" %(I, J))
    
    J += 1
  J = 1 + aux
  I += 0.2
  aux += 0.2
