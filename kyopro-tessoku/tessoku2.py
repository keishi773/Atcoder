﻿from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict
# 順列/組み合わせを扱う
import itertools
# 二分探索
import bisect

# 競技プログラミングの鉄則　2問
n,x = map(int, input().split())
a = list(map(int, input().split()))
for i in a:
    if i == x:
        print("Yes")
        exit()
print("No")