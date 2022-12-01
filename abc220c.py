from collections import deque
import math

n = int(input())
a = list(map(int, input().split()))
x = int(input())

# 数列aの総和でxを割る
sum_a = sum(a)
# xを数列aの総和で割る
w = x // sum_a
# 足した数
k = n * w
# bの総和
sum_b = sum_a * w
for i in range(n):
    sum_b += a[i]
    k += 1
    if sum_b > x:
        print(k)
        exit()
