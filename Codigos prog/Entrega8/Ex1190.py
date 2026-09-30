M = [[0 for j in range(12)]for i in range(12)]
O = str(input())
for i in range(12):
    for j in range(12):
        M[i][j]=float(input())
soma = 0 
media = 0
for i in range(12):
    for j in range(12):
        if j>i and i+j>=12 :
            soma+=M[i][j]
media = soma/66
if O =="S":
    print(f"{soma:.1f}")
else:
    print(f"{media:.1f}")