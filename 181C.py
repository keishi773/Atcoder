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
# 最小公倍数を求める
def lcm(a,b):
    return (a*b)//math.gcd(a,b)

n = int(input())
pl = []
for i in range(n):
   x,y = map(int, input().split())
   pl.append([x,y])

for i in range(n):
    for j in range(i + 1, n):
        for k in range(j + 1, n):
            # (y3-y1)(x2-x1)=(y2-y1)(x3-x1)
            if (pl[k][1] - pl[i][1]) * (pl[j][0] - pl[i][0]) == (pl[k][0] - pl[i][0]) * (pl[j][1] - pl[i][1]):
                print("Yes")
                exit()
print("No")


