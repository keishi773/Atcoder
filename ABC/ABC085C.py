import sys
N, Y = map(int, input().split())
for i in range(N+1):
    for j in range(N-i+1):
        k = N-i-j
        if 0 <= k <= 2000 and 10000*i+5000*j+1000*k == Y:
            print(str(i) + " " + str(j) + " " + str(k))
            sys.exit()
print("-1"+" "+"-1"+" "+"-1")