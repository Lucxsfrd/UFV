A,B,C = input().split(" ")
A = int(A)
B = int(B)
C = int(C)
if B<A and C>=B:
    print(":)")
elif B>A and C<=B:
    print(":(")
elif B>A and C>B:
    if (C-B)<(B-A):
        print(":(")
    else:
        print(":)")
elif B<A and C<B:
    if abs(C-B)< abs(B-A):
        print(":)")
    else:
        print(":(")
elif A==B:
    if C>B:
        print(":)")
    elif C<B:
        print(":(")
    else:
        print(":(")