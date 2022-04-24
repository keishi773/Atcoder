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

N, K = map(int, input().split())
s = [input() for i in range(N)]
ans = 0
#bit全探索
for i in range(2**N):
    alpha = [0] * 26
    for j in range(N):
        if ((i >> j)&1):
            for a in range(len(s[j])):
                b = ord(s[j][a]) - ord('a')
                alpha[b]+=1
    count = 0
    for j in range(26):
        if alpha[j] == K:
            count+=1
        ans = max(ans, count)
print(ans)






