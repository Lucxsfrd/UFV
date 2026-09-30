v = [0]*6
for i in range(6):
    v[i] = float(input())
contador = 0
for i in range(6):
    if v[i]>0:
        contador+=1
print(f"{contador} valores positivos")
