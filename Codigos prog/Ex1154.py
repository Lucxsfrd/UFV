quantidade = 0
soma = 0
while True:
        X = int(input())
        if X<0:
                break
        soma = soma+X
        quantidade+=1
        media = soma / quantidade
print(f"{media:.2f}")