import sys
import re
n = int(input())
t_o = 0
x_o = 0
y_o = 0
flag = True
for _ in range(n):
    t,x,y = map(int, input().split())
    dis = abs(x-x_o) + abs(y-y_o)
    time = t-t_o

    t_o = t
    x_o = x
    y_o = y

    if time < dis:
        flag = False
    elif time % 2 != dis % 2:
        flag = False

if flag:
    print("Yes")
else:
    print("No")