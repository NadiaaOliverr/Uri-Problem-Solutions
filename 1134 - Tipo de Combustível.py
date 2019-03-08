'''Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um algoritmo para ler o tipo de combustível abastecido
(codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo
código (até que seja válido). O programa será encerrado quando o código informado for o número 4.'''

n = 0
alcool=gasolina=diesel = 0

while n != 4:
    n = int(input())
    while n < 1 and n > 4:
        n = int(input())
    if n == 1:
        alcool+=1
    elif n == 2:
        gasolina+=1
    elif n == 3:
        diesel+=1
print('MUITO OBRIGADO\nAlcool: {0}\nGasolina: {1}\nDiesel: {2}'.format(alcool,gasolina,diesel))

