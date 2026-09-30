while True:
    try:
        N = int(input())
        cont_esquerda = [0] * 61
        cont_direita = [0] * 61
        for i in range(N):
            M, L = input().split(" ")
            M = int(M)
            if L == "E":
                cont_esquerda[M] += 1
            elif L == "D":
                cont_direita[M] += 1
                
        pares = 0
        for tamanho in range(30, 61):
            if cont_esquerda[tamanho] < cont_direita[tamanho]:
                pares += cont_esquerda[tamanho]
            else:
                pares += cont_direita[tamanho]         
        print(pares)
        
    except EOFError:
        break