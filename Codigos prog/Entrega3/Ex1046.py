A, B = input().split(" ")
A = int(A)
B = int(B)
if A>B:
    h=(24-A)+B
    print(f"O JOGO DUROU {h} HORA(S)")
elif A == B:
    print("O JOGO DUROU 24 HORA(S)")
else:
    h=B-A
    print(f"O JOGO DUROU {h} HORA(S)")