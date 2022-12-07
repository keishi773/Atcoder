from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict
# 順列/組み合わせを扱う
import itertools
# 二分探索
import bisect

n, k = map(int, input().split())
A = [0] + list(map(int, input().split()))

# visitedリスト
visited = [-1] * (n+1)
visited[1] = 0

# 今いる町
now_town = 1
move_cnt = 0


for i in range(10**6):
    move_cnt += 1
    now_town = A[now_town]
    if move_cnt == k:
        print(now_town)
        exit()
    if visited[now_town] == -1:
        visited[now_town] = move_cnt
    else:
        cycle = move_cnt - visited[now_town]
        break
k -= move_cnt
k %= cycle
for i in range(k):
    now_town = A[now_town]

print(now_town)

