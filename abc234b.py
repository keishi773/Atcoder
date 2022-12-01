from collections import deque
import math
n = int(input())
x = []
y = []
for i in range(n):
    xi,yi = map(int, input().split())
    x.append(xi)
    y.append(yi)
ans = -10**15
k = 0
for i in range(n):
    for j in range(i+1,n):
        k = math.sqrt((x[i]-x[j])**2 +(y[i]-y[j])**2)
        ans = max(ans,k)
print(ans)