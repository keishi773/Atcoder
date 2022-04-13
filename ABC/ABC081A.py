from sys import stdin

s = input()
a = 0
for i in range(len(s)):
    if s[i] == '1':
        a+=1
print(a)
