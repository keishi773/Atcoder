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
A, B = map(int, input().split())
def my_lcm(A,B):
    return (A*B) // math.gcd(A,B)
ans = my_lcm(A, B)
print(ans)
