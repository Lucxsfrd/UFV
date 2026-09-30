valor_inicial = int(input())
valor = valor_inicial
notas = [100, 50, 20, 10, 5, 2, 1]
print(valor_inicial)
for nota in notas:
    quantidade_notas = valor // nota 
    valor = valor % nota               
    print(f"{quantidade_notas} nota(s) de R$ {nota},00")