from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict
# 順列/組み合わせを扱う
import itertools
# 二分探索
import bisect

n,q = map(int, input().split())
a = list(map(int, input().split()))
# 累積和
a_sum = [0] * n
a_sum[0] = a[0]
for i in range(1,n):
    a_sum[i] = a_sum[i-1] + a[i]
# print(a_sum)
for i in range(q):
    l,r = map(int,input().split())
    if l == 1:
        print(a_sum[r-1])
    else:
        print(a_sum[r-1] - a_sum[l-2])