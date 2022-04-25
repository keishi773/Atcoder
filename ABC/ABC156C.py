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

N = int(input())
X = list(map(int, input().split()))
ans = 100000001
for i in range(1,100):
    sum = 0
    for j in range(N):
        sum += (X[j]-i) * (X[j]-i)
    ans = min(ans, sum)
print(ans)