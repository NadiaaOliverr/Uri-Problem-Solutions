N = int(input())
number = []
for i in range(N):
    year = int(input())
    calculate_year = year - 2015
    if(calculate_year < 0):
        print('{0} D.C.'.format(-calculate_year))
    elif(calculate_year==0):
        print('1 A.C.')
    else:
        print('{0} A.C.'.format(calculate_year+1))