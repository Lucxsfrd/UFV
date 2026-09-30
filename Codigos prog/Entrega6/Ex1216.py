media = 0
soma = 0
quantidade = 0
while True:
    try:
        nome = str(input())
        distancia = int(input())
        soma += distancia
        quantidade += 1
    except EOFError:
        break
media = soma / quantidade
print(f"{media:.1f}")