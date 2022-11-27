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

mod = 10**9+7
# math gcd
# 最小公倍数を求める
def lcm(a,b):
    return (a*b)//math.gcd(a,b)

x, k, d = map(int, input().split())
x = abs(x)
f_j = 0
b_j = 0
if 0 < x-k*d:
    print(abs(x-k*d))
    exit()
else:
    f_j = x - ((x//d) * d)
    b_j = f_j - d
    k -= (x//d)
if k % 2 == 0:
    print(f_j)
else:
    print(abs(b_j))