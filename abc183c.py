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

n, k = map(int, input().split())
t_time = []
for i in range(n):
    tl = list(map(int, input().split()))
    t_time.append(tl)
ans = 0
# 順列組み合わせ
# 例) 4までだとしたら 234 の順列
# 例) 1 234の順列 1
for root in itertools.permutations(range(1,n)):
    now_time = 0
    now_city = root[0]
    # 1 -> root[0]までの時間
    now_time += t_time[0][root[0]]
    for i in range(1, n-1):
        to_city = root[i]
        now_time += t_time[now_city][to_city]
        now_city = to_city
    # now_city -> 1まで
    now_time += t_time[now_city][0]
    if now_time == k:
        ans += 1
print(ans)



