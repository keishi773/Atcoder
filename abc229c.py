from collections import deque
import math

n, w = map(int, input().split())
cheese = []
for i in range(n):
    a,b = map(int, input().split())
    cheese.append([a,b])
cheese.sort(reverse=True)
cheese_weight = 0
ans = 0
for i in range(n):
    cheese_weight = min(w,cheese[i][1])
    w -= cheese_weight
    ans += cheese_weight * cheese[i][0]
    if w <= 0:
        print(ans)
        exit()
print(ans)