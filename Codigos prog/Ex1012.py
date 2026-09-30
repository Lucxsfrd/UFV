A,B,C = input().split(" ")
A = float(A)
B = float(B)
C = float(C)
pi = 3.14159
areat = (A*C)/2
areac = pi * C**2
areatrap = ((A+B)*C)/2
areaq = B**2
arear = A * B
print(f"TRIANGULO: {areat:.3f}")
print(f"CIRCULO: {areac:.3f}")
print(f"TRAPEZIO: {areatrap:.3f}")
print(f"QUADRADO: {areaq:.3f}")
print(f"RETANGULO: {arear:.3f}")