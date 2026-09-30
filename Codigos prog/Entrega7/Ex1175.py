N = [0]*20
for i in range(20):
    N[i] = int(input())
x = 19
for i in range(10):
    y = N[i]
    N[i] = N[x]
    N[x] = y
    x-=1
for i in range(20):
    print(f"N[{i}] = {N[i]}")