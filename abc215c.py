from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict
import itertools

s,k = map(str, input().split())
k = int(k)
al = set()
for seq in itertools.permutations(range(len(s))):
    sa = ""
    for i in range(len(s)):
        sa += s[seq[i]]
    al.add(sa)
jisho = list(al)
jisho.sort()
print(jisho[k-1])