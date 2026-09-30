a,b,c = (input()).split(" ")
a,b,c = int(a), int(b), int(c)
maiorab = int(((a+b)+abs(a-b))/2)
if maiorab > c :
    print(maiorab,"eh o maior")
else: 
    print(c,"eh o maior") 