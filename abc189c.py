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

n = int(input())
al = list(map(int, input().split()))
ans = -10**5
for l in range(n):
    a_min = al[l]
    for r in range(l,n):
        a_min = min(a_min,al[r])
        ans = max(ans, a_min*(r-l+1))
print(ans)