v = [0]*10
for i in range(10):
    v[i] = int(input())
    if v[i]<=0:
        v[i]=1
    print(f"X[{i}] = {v[i]}")