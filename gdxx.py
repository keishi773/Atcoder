from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict
# 順列/組み合わせを扱う
import itertools
# 二分探索
import bisect

n,sum = map(int, input().split())
# n = input()
ans = 0
# for i in range(1,3000+1):
#     for j in range(1,3000+1):
#         for k in range(1,3000+1):
#             if i + j + k == sum:
#                 ans += 1
# print(ans)
for i in range(1,n+1):
    for j in range(1,n+1):
        k = sum - i - j
        if 1 <= k and k <= n:
            ans += 1
print(ans)