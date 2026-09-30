S = 0 
for i in range(1,20):
    numerador = (2*i-1)
    denominador = 2**(i-1)
    S = S + (numerador/denominador)
print(f"{S:.2f}")