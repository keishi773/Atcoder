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
A, B, C, D, E, F, X = map(int, input().split())
ta = 0
ao = 0
for i in range(X):
    if i % (A+C) < A:
        ta += B
    if i % (D+F) < D:
        ao += E
if ta > ao:
    print("Takahashi")
elif ta < ao:
    print("Aoki")
else:
    print("Draw")