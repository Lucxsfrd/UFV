while True:
    try:
        N = int(input())
        M,L = input().split(" ")
        M = int(M)
        L = int(L)
        matrizmarcos = [[0 for j in range(N)]for i in range(M)]
        matrizleonardo = [[0 for j in range(N)]for i in range(L)]
        for i in range(M):
            marcosatributos = input().split()              
            for j in range(N):
                matrizmarcos[i][j] = int(marcosatributos[j])
        for i in range(L):
            leonardoatributos = input().split()
            for j in range(N):
                matrizleonardo[i][j] = int(leonardoatributos[j])
        Cm, Cl = input().split()
        Cm = int(Cm)
        Cl = int(Cl)
        A = int(input())
        valorfinalmarcos = matrizmarcos[Cm-1][A-1]
        valorfinalleonardo = matrizleonardo[Cl-1][A-1]
        if valorfinalmarcos>valorfinalleonardo:
            print("Marcos")
        elif valorfinalleonardo>valorfinalmarcos:
            print("Leonardo")
        else:
            print("Empate")
    except EOFError:
        break