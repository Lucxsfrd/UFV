L,A,P,R = input().split(" ")
L = int(L)
A = int(A)
P = int(P)
R = int(R)
d = 2*R
hipotenusa1 = ((L*L)+(P*P))**(1/2)
hipotenusa2 = ((hipotenusa1**2)+(A*A))**(1/2)
if hipotenusa2>d:
    print("N")
else:
    print("S")