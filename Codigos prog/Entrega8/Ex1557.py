while True:
    try:
        N = int(input())
        if N==0:
            break
        m = [[2**(i+j)for j in range(N)]for i in range(N)]     
        maior = m[0][0]
        T = 0
        for i in range(N):
            for j in range(N):
                if m[i][j]>maior:
                    maior = m[i][j]
        T = maior       
        contador = 0
        while T>0:  
                T//=10
                contador+=1
        for i in range(N):
                for j in range(N):    
                    if j == N-1:
                        print(f"{m[i][j]:>{contador}}")
                    else:
                        print(f"{m[i][j]:>{contador}}", end=" ")
        print()
    except:
        break