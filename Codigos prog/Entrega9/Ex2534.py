while True:
    try:
        N, Q = input().split(" ")
        N = int(N)
        Q = int(Q)
        notas = [0]*N
        for i in range(N):
            notas[i] = int(input())
        for i in range(N):
            imaior = i
            for j in range(i+1,N):
                if notas[j]>notas[imaior]: 
                    imaior = j             
            aux = notas[i]
            notas[i] = notas[imaior]
            notas[imaior] = aux      
        
        for i in range(Q):
            p = int(input()) 
            print(notas[p-1])                                 
    except EOFError:
        break