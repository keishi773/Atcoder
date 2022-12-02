from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict


s = input()
s = list(s)
ans = 0
for i in range(len(s)):
    if s[i] == "1":
        ans += 1
print(ans)