NOME = input("")
SALARY = float(input())
VENDA = float(input())
COMISSAO = (0.15 * VENDA)
TOTAL = SALARY + COMISSAO
print(f"TOTAL = R$ {TOTAL:.2f}")
