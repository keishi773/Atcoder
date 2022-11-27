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
sn = str(n)
# 桁数
nlen = len(str(n))
a1 = False
a2 = False
aa = n%3
nl = []
nketa = 0
for i in range(nlen):
    nketa = int(sn[i])
    if nketa % 3 == 1:
        a1 = True
    elif nketa % 3 == 2:
        a2 = True
if aa == 0:
    print(0)
elif aa == 1:
    if a1:
        if nlen <= 1:
            print(-1)
        else:
            print(1)
    else:
        if nlen <= 2:
            print(-1)
        else:
            print(2)
elif aa == 2:
    if a2:
        if nlen <= 1:
            print(-1)
        else:
            print(1)
    else:
        if nlen <= 2:
            print(-1)
        else:
            print(2)







