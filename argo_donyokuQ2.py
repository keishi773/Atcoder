N = int(input())
cnt = 0
while N > 0:
    cnt+=1
    if N % 2 == 0:
        N //= 2
    else:
        N-=1
print(cnt)