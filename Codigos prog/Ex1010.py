a,b,c = input().split(" ")
a = int(a)
b = int(b)
c = float(c)
a2,b2,c2 = input().split(" ")
a2 = int(a2)
b2 = int(b2)
c2 = float(c2)
Preco1 = b*c    
Preco2 = b2*c2
Total = Preco1+Preco2
print(f"VALOR A PAGAR: R$ {Total:.2f}")

