while True:
    try:
        N = int(input())
        v = input().split()
        for i in range(N):
            v[i] = int(v[i])
        contador = 0
        for i in range(N):
            if v[i]==1:
                contador+=1
        if contador>=(2/3*N):
            print("impeachment")
        else:
            print("acusacao arquivada")
    except EOFError:
        break