x=input()
total=0

for i in range(len(x)):
    if('A'<=x[i]<='C'):
        total +=3
    elif('D'<=x[i]<='F'):
        total += 4
    elif('G'<=x[i]<='I'):
        total += 5
    elif('J'<=x[i]<='L'):
        total += 6
    elif('M'<=x[i]<='O'):
        total += 7
    elif('P'<=x[i]<='S'):
        total += 8
    elif('T'<=x[i]<='V'):
        total += 9
    else:
        total += 10

print(total)
