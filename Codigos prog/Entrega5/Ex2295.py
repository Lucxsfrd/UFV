A,G,Ra,Rg = input().split(" ")
A = float(A)
G = float(G)
Ra = float(Ra)
Rg = float(Rg)
if A==G:
    print("G")
else:
    CustoKmA = Ra/A
    CustoKmG = Rg/G
    if CustoKmG >= CustoKmA:
        print("G")
    else:
        print("A")