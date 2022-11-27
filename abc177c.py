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

n = int(input())
a_list = list(map(int,input().split()))
a_sum = sum(a_list)
ans = 0
for i in range(n):
    a_sum -= a_list[i]
    ans += a_sum * a_list[i]
    ans %= mod
print(ans)
