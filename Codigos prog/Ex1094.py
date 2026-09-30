total = 0
c = 0
totalc = 0
r = 0
totalr = 0
s = 0
totals = 0
N = int(input())
for i in range(N):
    quantia,cobaia = input().split(" ")
    quantia = int(quantia)
    cobaia = str(cobaia)
    total += quantia
    if cobaia=="C":
        c+=1
        c = c*quantia
        totalc+=c
        c = 0
    elif cobaia=="R":
        r+=1
        r = r*quantia
        totalr+=r
        r = 0
    else:
        s+=1
        s = s*quantia
        totals+=s
        s = 0
percentualc = (totalc/total)*100
percentualr = (totalr/total)*100
percentuals = (totals/total)*100
print(f"Total: {total} cobaias")
print(f"Total de coelhos: {totalc}")
print(f"Total de ratos: {totalr}")
print(f"Total de sapos: {totals}")
print(f"Percentual de coelhos: {percentualc:.2f} %")
print(f"Percentual de ratos: {percentualr:.2f} %")
print(f"Percentual de sapos: {percentuals:.2f} %")

