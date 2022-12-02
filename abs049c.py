from collections import deque
import math
# 初期値があって便利な連想配列
from collections import defaultdict

# greedy 文字列反転させて割っていく。割れればok
s = input()
a = s.replace("eraser","").replace("erase","").replace("dreamer","").replace("dream","")
print("YES" if len(a)==0 else "NO")

