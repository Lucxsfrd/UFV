A, B, C, = (input()).split(" ")
A = float(A)
B = float(B)
C = float(C)
if A + B > C and B + C > A and A + C > B:
    p = A + B + C
    print("Perimetro =" , p)
else:
    a=((A+B)*C)/2
    print("Area =" , a)