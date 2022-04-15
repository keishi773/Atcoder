N = int(input())
A = list(map(int, input().split()))
sei = [0]*110
for i in range(N):
    sei[A[i]] += 1

for i in range(1,10):
    print(sei[i])