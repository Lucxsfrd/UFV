renda = float(input())
if 0<renda<=2000:
    print("Isento")
elif 2000.01<=renda<=3000:    
    e = renda - 2000
    imposto = e*0.08 
    print(f"R$ {imposto:.2f}")
elif 3000.01<=renda<=4500:
    e = renda - 2000
    e1 = 0.08*1000
    e2 = e - 1000   
    imposto = e2*0.18
    total = e1+imposto
    print(f"R$ {total:.2f}")
else:
    imposto1 = 0.08*1000
    imposto2 = 0.18 * 1500
    e3 = renda - 4500
    imposto3 = 0.28 * e3
    total = imposto1+imposto2+imposto3
    print(f"R$ {total:.2f}")
