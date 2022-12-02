from collections import deque
import math

# nを入力
n = int(input())
# 出した手を管理する配列
used = [False] * (2*n+2)
print(1)
used[1] = True
for i in range(n+1):
    y = int(input())
    used[y] = True
    if y == 0:
        exit()
    for j in range(1,2*n+2):
        if used[j] == False:
            print(j)
            used[j] = True
            break