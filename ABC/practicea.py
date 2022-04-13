from sys import stdin

a = int(input())
b, c = map(int, input().split())
s = input()
sum: int = a + b + c
print(str(sum) + " " + s)