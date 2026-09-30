C = int(input())
Y = "Y"
N = "N"
for i in range(C):
    nome, força = input().split(" ")
    nome = str(nome)
    força = int(força)    
    if nome=="Thor":
        print(Y)
    else: 
        print(N)