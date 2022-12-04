from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict
# 順列/組み合わせを扱う
import itertools
# 二分探索
import bisect

# n,k = map(int, input().split())
n = int(input())
a = list(map(int,input().split()))

for i in range(n):
    for j in range(i+1,n):
        for k in range(j+1,n):
            if a[i] + a[j] + a[k] == 1000:
                print("Yes")
                exit()
print("No")
