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

# 約数列挙
def makeDivisors(n):
    lower_divisors, upper_divisors = [], []
    i = 1
    while i*i <= n:
        if n%i == 0:
            lower_divisors.append(i)
            if i != n // i:
                upper_divisors.append(n//i)
        i+=1
    return lower_divisors + upper_divisors[::-1]

a = makeDivisors(N)
for x in a:
    print(x)