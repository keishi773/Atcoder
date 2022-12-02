from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict

n = int(input())
al = list(map(int, input().split()))
cnt = 0
is_ok = True
while is_ok:
    for i in range(n):
        if al[i] % 2 == 0:
            al[i] //= 2
        else:
            is_ok = False
            cnt -=1
            break
    cnt += 1

print(cnt)