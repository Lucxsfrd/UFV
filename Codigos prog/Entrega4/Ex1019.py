s = int(input())
h = s//3600
hr = s%3600
min = hr//60
minr = hr%60
seg = minr
print(f"{h}:{min}:{seg}")
