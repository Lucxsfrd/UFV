N = [0]*10
V = int(input())
for i in range(10):
    N[i] = V
    V*=2
    print(f"N[{i}] = {N[i]}")