from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict

s = input()
s = list(s)
str7 = "=7"
for i in range(1<<3):
    sum = int(s[0])
    ans = s[0]
    for shift in range(3):
        if i >> shift & 1 == 1:
            sum += int(s[shift+1])
            ans += "+" + s[shift+1]
        else:
            sum -= int(s[shift+1])
            ans += "-" + s[shift+1]
    if sum == 7:
        print(ans+str7)
        exit()
