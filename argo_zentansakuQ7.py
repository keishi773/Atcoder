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

#N,V = map(int, input().split())
N = int(input())
A = list(map(int, input().split()))

maxnum = A[0]
ans = 0
for i in range(len(A)):
    if A[i] > maxnum:
        maxnum = A[i]
        ans = i

print(ans)