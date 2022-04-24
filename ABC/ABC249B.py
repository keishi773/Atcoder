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
S = input()
u = set(S)
a = False
b = False
c = False
for i in range(len(S)):
    a = S[i].isupper()
    if a:
        break
for i in range(len(S)):
    b = S[i].islower()
    if b:
        break
if len(u) == len(S):
    c = True

if a and b and c:
    print("Yes")
else:
    print("No")



