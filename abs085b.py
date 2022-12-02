from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict

s = input()
sl = ["dream","dreamer","erase","eraser"]
ans = ""
for i in range(1<<len(sl)):
    for shift in range(n):
        if i >> shift & 1 == 1:
            ans += sl[i]
    if ans == s:
        print("YES")
    else:
        print("NO")