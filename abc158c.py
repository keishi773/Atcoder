import sys
# 正規表現
import re
import math
import itertools
# 配分二分法アルゴリズム
from bisect import bisect_left, bisect_right
# ヒープキューアルゴリズム/優先度キューアルゴリズム
from heapq import heappop, heappush
# deque
from collections import deque
# counter
from collections import Counter
# 最大値
max_ans = -10**15
# 最小値
min_ans = 10**15
# mod 10^9+7
mod = 10**9+7
# math gcd
# 最小公倍数を求める
# def lcm(a,b):
#     return (a*b)//math.gcd(a,b)

s = input()
q = int(input())
# 普通状態 False 反転状態 True
is_rev = False
# dequeを利用する
s_deque = deque()
for i in range(len(s)):
    s_deque.append(s[i])
for i in range(q):
    tf2 = list(map(str,input().split()))
    if tf2[0] == "1":
        if is_rev:
            is_rev = False
        else:
            is_rev = True
    # 文字末尾と後ろに
    else:
        f = tf2[1]
        c = tf2[2]

        # 反転状態のとき
        if is_rev:
            if f == "1":
                # 末尾にCを追加
                s_deque.append(c)
            else:
                # 先頭にCを追加
                s_deque.appendleft(c)
        else:
            if f == "1":
                # 先頭にCを追加
                s_deque.appendleft(c)
            else:
                # 末尾にCを追加
                s_deque.append(c)
ans="".join(s_deque)
if is_rev:
    print(ans[::-1])
else:
    print(ans)





