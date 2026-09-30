soma_M = 0
quantidade = 0
while True:
    w1, w2, R = input().split(" ")
    w1 = int(w1)
    w2 = int(w2)
    R = int(R)
    if w1 == 0 and w2 == 0 and R == 0:
        break
    RM1 = w1 * (1 + (R / 30))
    RM2 = w2 * (1 + (R / 30))
    M = (RM1 + RM2) / 2
    soma_M += M
    quantidade += 1
    if 1 <= M < 13:
        print("Nao vai da nao")
    elif 13 <= M < 14:
        print("E 13")
    elif 14 <= M < 40:
        print("Bora, hora do show! BIIR!")
    elif 40 <= M <= 60:
        print("Ta saindo da jaula o monstro!")
    elif M > 60:
        print("AQUI E BODYBUILDER!!")
media = soma_M / quantidade
if media > 40:
    print()
    print("Aqui nois constroi fibra rapaz! Nao e agua com musculo!")