X = int(input())
A = list(map(int, input().split()))
C = [50,10,5,1]
cnt = 0
while X > 0:
    for i in range(len(A)):
        use = min(A[i], X//C[i])
        X -= use * C[i]
        cnt += use
print(cnt)