salario = float(input())
if 0<salario<=400:
    reajuste = 0.15*salario
    ns = reajuste + salario
    print(f"Novo salario: {ns:.2f}")
    print(f"Reajuste ganho: {reajuste:.2f}")
    print("Em percentual: 15 %")
if 400.01<=salario<=800.00:
    reajuste = 0.12*salario
    ns = reajuste + salario
    print(f"Novo salario: {ns:.2f}")
    print(f"Reajuste ganho: {reajuste:.2f}")
    print("Em percentual: 12 %")
if 800.01<=salario<=1200.00:
    reajuste = 0.10*salario
    ns = reajuste + salario
    print(f"Novo salario: {ns:.2f}")
    print(f"Reajuste ganho: {reajuste:.2f}")
    print("Em percentual: 10 %")
if 1200.01<=salario<=2000.00:
    reajuste = 0.07*salario
    ns = reajuste + salario
    print(f"Novo salario: {ns:.2f}")
    print(f"Reajuste ganho: {reajuste:.2f}")
    print("Em percentual: 7 %")
if salario>2000.00:
    reajuste = 0.04*salario
    ns = reajuste + salario
    print(f"Novo salario: {ns:.2f}")
    print(f"Reajuste ganho: {reajuste:.2f}")
    print("Em percentual: 4 %")


