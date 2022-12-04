from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict
import itertools

n = int(input())
al = list(map(int,input().split()))
dic = defaultdict(int)
# 全体の組み合わせ - Ai = Ajの組み合わせ
zenbu = n * (n - 1) // 2
# 各文字の個数を出す
for i in range(n):
    dic[al[i]] += 1
ss = 0
# for i in range(len(dic)):
#         print("----dec------")
#         print(dic[i])
#         print(len(dic))
#         ss += (dic[i] * (dic[i] - 1)) // 2
sa = 0
# for x in dic.values():
#     sa += x*(x-1)//2
    # print("----x-----")
    # print(x)
# print(zenbu,ss,sa)
# print(dic.values())
print(zenbu - sa)

