import sys
import re
N, X = map(int, input().split())
A = list(map(int, input().split()))
ans=[]
for i in range(len(A)):
    if A[i] != X:
        ans.append(A[i])
print(*ans)
