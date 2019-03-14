N = int(input())

i = total_coelhos = numero_total = total_ratos = total_sapos = 0

while i < N:
    Quantia,Tipo = input().split(" ")
    Quantia = int(Quantia)
    while Quantia < 1 or Quantia > 15:
        Quantia,Tipo = input().split(" ")
        Quantia = int(Quantia)
    Tipo = str(Tipo)
    if Tipo == 'C':
        total_coelhos+=Quantia
    elif Tipo == 'R':
        total_ratos+=Quantia
    elif Tipo == 'S':
        total_sapos+=Quantia
    numero_total += Quantia
    i+=1

percent_coelho = percent_rato = percent_sapo = 0
percent_coelho = (total_coelhos*100.00)/numero_total
percent_rato = (total_ratos*100.00)/numero_total
percent_sapo = (total_sapos*100.00)/numero_total

print('Total: %d cobaias'%(numero_total))
print('Total de coelhos: %d'%(total_coelhos))
print('Total de ratos: %d'%(total_ratos))
print('Total de sapos: %d'%(total_sapos))
print('Percentual de coelhos: {:.2f} %'.format(percent_coelho))
print('Percentual de ratos: {:.2f} %'.format(percent_rato))
print('Percentual de sapos: {:.2f} %'.format(percent_sapo))
