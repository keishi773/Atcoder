import sys
import re
H, W, X, Y = map(int, input().split())
# N = int(input())
S = []
for _ in range(H):
    s = input()
    s = list(s)
    S.append(s)
X -= 1
Y -= 1
ans = 0
# 上方向
for i in range(1, H):
    if 0 <= X - i < H:
        if S[X-i][Y] == "#":
            break
        else:
            ans+=1
# 下方向
for i in range(1, H):
    if 0 <= X + i < H:
        if S[X+i][Y] == "#":
            break
        else:
            ans+=1
# 左方向
for i in range(1, W):
    if 0 <= Y - i < W:
        if S[X][Y-i] == "#":
            break
        else:
            ans+=1
# 右方向
for i in range(1, W):
    if 0 <= Y + i < W:
        if S[X][Y+i] == "#":
            break
        else:
            ans+=1

#その場
ans+=1
print(ans)



