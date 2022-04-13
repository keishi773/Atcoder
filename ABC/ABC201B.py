import sys
import re
# N, S, D = map(int, input().split())
N = int(input())
yama=[]
for _ in range(N):
    S, T = map(str, input().split())
    T = int(T)
    yama.append([T, S])
yama.sort(reverse=True)
print(yama[1][1])
