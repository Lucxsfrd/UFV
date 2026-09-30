N = int(input())
for i in range(N):
    posicoes = input().split()
    for j in range(10):
        posicoes[j] = int(posicoes[j])
    xrobo = posicoes[8]
    yrobo = posicoes[9]
    if posicoes[0]<=xrobo<=posicoes[2] and posicoes[6]<=xrobo<=posicoes[4] and posicoes[1]<=yrobo<=posicoes[7] and posicoes[3]<=yrobo<=posicoes[5]:
        print("1")
    else:
        print("0")
