N = int(input())
for i in range(N):
    contador = 0
    X = int(input())
    for j in range(1,X+1):
        if X%j == 0:
            contador+=1
    if contador > 2:
        print(f"{X} nao eh primo")
    else:
        print(f"{X} eh primo")
