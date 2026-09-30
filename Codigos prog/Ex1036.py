a, b, c = input().split(" ")
a = float(a)
b = float(b)
c = float(c)
delta = (b**2) - (4*a*c)
if a == 0 or delta < 0:
    print("Impossivel calcular")
else:
    raizdelta = delta**(1/2)
    R1 = (-b + raizdelta) / (2*a)
    R2 = (-b - raizdelta) / (2*a)
    print(f"R1 = {R1:.5f}")
    print(f"R2 = {R2:.5f}")