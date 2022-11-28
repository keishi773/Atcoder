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
h = [0] + list(map(int, input().split()))
dp=[10**15]*(n+1)
dp[1] = 0
dp[2] = abs(h[2]-h[1])
for i in range(3,n+1):
    cost1 = dp[i-1]+abs(h[i]-h[i-1])
    cost2 = dp[i-2]+abs(h[i]-h[i-2])
    dp[i] = min(cost1,cost2)
print(dp[n])



