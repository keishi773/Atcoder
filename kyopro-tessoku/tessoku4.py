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
s = str(format(n,"b"))
s = s.zfill(10)
print(s)