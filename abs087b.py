from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict

a = int(input())
b = int(input())
c = int(input())
x = int(input())
cnt = 0
for i in range(a+1):
    for j in range(b+1):
        for k in range(c+1):
            sum_abc = (500*i) + (100*j) + (50*k)
            if sum_abc == x:
                cnt += 1
print(cnt)