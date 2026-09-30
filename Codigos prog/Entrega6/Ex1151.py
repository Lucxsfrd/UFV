a = 0
b = 1
N = int(input())

for i in range(N):
    if i > 0:
        print(" ", end="")
    print(a, end="")
    
    sequencia = a + b
    a = b
    b = sequencia

print()