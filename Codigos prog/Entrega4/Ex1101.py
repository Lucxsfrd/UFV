while True:
    M,N = input().split(" ")
    M=int(M)
    N=int(N)
    parordenado = (M,N)
    if M<=0 or N<=0:
        break
    inicio = min(M,N)
    fim = max(M,N)
    soma=0
    for i in range(inicio,fim+1):
        print(i, end=" ")
        soma+=i
    print(f"Sum={soma}")
