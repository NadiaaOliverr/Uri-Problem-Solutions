while True:
    try:
        v = float(input())
        d = float(input())
        
        altura = v / (3.14*((d/2)**2))
        area = 3.14 * ((d/2)**2)
        
        print('ALTURA = {:.2f}'.format(altura))
        print('AREA = {:.2f}'.format(area))
        
    
    except(EOFError):
        break