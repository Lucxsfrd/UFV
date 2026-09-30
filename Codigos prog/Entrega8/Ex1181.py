M = [[0 for j in range(12)]for i in range(12)]
L = int(input())
T = str(input())
for i in range(12):
    for j in range(12):
        M[i][j]=float(input())
soma = 0 
media = 0
for j in range(12):
    if T=="S":
        soma+=M[L][j]
    else:
        soma+=M[L][j]
        media=soma/12
if T=="S":
    print(f"{soma:.1f}")
else:
    print(f"{media:.1f}")