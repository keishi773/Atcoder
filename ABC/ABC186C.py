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
def checkT(N):
    N = str(N)
    if "7" in N:
        return True
    else:
        return False
def checkE(N):
    s = ""
    while N > 0:
        s = str(N % 8) + s
        N//=8
    if "7" in s:
        return True
    else:
        return False

ans = 0
for i in range(1, N+1):
    if checkT(i) == False and checkE(i) == False:
        ans+=1
print(ans)