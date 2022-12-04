from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict
# 順列/組み合わせを扱う
import itertools
# 二分探索
import bisect

n = int(input())
c = list(map(int, input().split()))
c.sort()
mod = 10**9+7
ans = 1
for i in range(n):
    if c[i] - i == 0:
        print(0)
        exit()
    ans *= c[i] - i
    ans %= mod
print(ans)
