v = [0]*61
v[0] = 0
v[1] = 1
i = 2
while i <= 60:
    v[i] = (v[i-1])+(v[i-2])
    i+=1
T = int(input())
for i in range(T):
    x = int(input())
    print(f"Fib({x}) = {v[x]}")