v = [0]*6
for i in range(6):
    v[i] = float(input())
contador = 0
for i in range(6):
    if v[i]>=0:
        contador+=1
soma = 0
qntd = 0
for i in v:
    if i>0:
        soma+=i
        qntd +=1
media = soma/qntd
print(f"{contador} valores positivos")
print(f"{media:.1f}")