import sys
# 正規表現
import re
# 配分二分法アルゴリズム
from bisect import bisect_left, bisect_right
# ヒープキューアルゴリズム/優先度キューアルゴリズム
from heapq import heappop, heappush
# deque
from collections import deque
# counter
from collections import Counter

# 各桁を大きい順に並び替えて数字で返す
def digitMaxSum(n):
    s = str(n)
    array = list(map(int, s))
    array.sort(reverse=True)
    s = ""
    for i in range(len(array)):
        s += str(array[i])
    return int(s)

def digitMinSum(n):
    s = str(n)
    array = list(map(int, s))
    array.sort()
    s = ""
    for i in range(len(array)):
        s += str(array[i])
    return int(s)

# つなげる
def digitsumsum(n):
    return digitMaxSum(n) - digitMinSum(n)

N, K = map(int, input().split())
# k回繰り返す
ans = N
for _ in range(K):
    ans = digitsumsum(ans)

print(ans)

