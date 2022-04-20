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
# math gcd
N, K = map(int, input().split())
f = []
for i in range(N):
    A, B = map(int, input().split())
    f.append([A,B])
f.sort()
now = 0
now += K
for i in range(N):
    # 友達の位置
    f_n = f[i][0]
    # 友達のお金
    f_m = f[i][1]
    if now >= f_n:
        now += f_m
    else:
        break
print(now)
