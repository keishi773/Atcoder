n = int(input())
a = ""
while 0 < n:
    if n % 2 == 0:
        a = "B" + a
        n //= 2
    else:
        a = "A" + a
        n -= 1
print(a)