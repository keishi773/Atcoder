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

n,k = map(int,input().split())
dice_list = list(map(int,input().split()))
ans = 0
# 累積和を作成する
chance_dice = []
chance_dice_wa = []
for i in range(n):
    chance_dice.append((dice_list[i]+1) / 2)
chance_dice_wa = [chance_dice[0]]
for i in range(1,n):
    chance_dice_wa.append(chance_dice_wa[i-1]+chance_dice[i])
ans = -10**15
for i in range(n-k+1):
    if i == 0:
        ans_tmp = chance_dice_wa[i+k-1]
    else:
        ans_tmp = chance_dice_wa[i+k-1]-chance_dice[i-1]
    ans = max(ans_tmp,ans)
print(ans)






