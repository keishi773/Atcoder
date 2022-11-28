import sys
# 正規表現
import re
import math
import itertools
# 配分二分法アルゴリズム
from bisect import bisect_left, bisect_right
# ヒープキューアルゴリズム/優先度キューアルゴリズム
from heapq import heappop, heappush
# deque
from collections import deque
# counter
from collections import Counter
# 最大値
max_ans = -10**15
# 最小値
min_ans = 10**15
# mod 10^9+7
mod = 10**9+7
# math gcd
# 最小公倍数を求める
# def lcm(a,b):
#     return (a*b)//math.gcd(a,b)

n,m,x = map(int, input().split())
c = []
a = []
for i in range(n):
    ca = list(map(int, input().split()))
    c.append(ca[0])
    a.append(ca[1:])
ans = 10**15
# bit全探索　N
for i in range(1<<n):
    cost = 0
    skill = [0] * m
    for shift in range(n):
        if i >> shift & 1 == 1:
            cost += c[shift]
            for j in range(m):
                skill[j] += a[shift][j]
        if x <= min(skill):
            ans = min(ans,cost)
if ans == 10**15:
    print(-1)
else:
    print(ans)

