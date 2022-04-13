from sys import stdin

a, b = map(int, input().split())
sum = a * b
if sum % 2 != 0:
    print("Odd")
else:
    print("Even")
