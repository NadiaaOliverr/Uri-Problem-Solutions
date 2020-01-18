while True:
    try:
        n = str(input())
        hora, minuto = n.split(':')
        hora = int(hora)    
        minuto = int(minuto)
        resultado = hora * 60 + minuto + 60
        resultado = resultado-(8*60)
        if(resultado<0):
            resultado = 0
        print('Atraso maximo: {}'.format(resultado))
    
    except(EOFError):
        break