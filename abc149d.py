from collections import deque

n, k = map(int, input().split())
R,S,P = map(int, input().split())
t = input()
hands = []
ans = 0
for i in range(len(t)):

    if t[i] == "r":
        # cpuがグー
        if i < k:
            hands.append("p")
            ans += P
        # k回目以上のじゃんけんでかつk回目にパーを出していない
        elif i >= k and hands[i-k] != "p":
            hands.append("p")
            ans += P
        else:
            hands.append("z")
    if t[i] == "p":
        # cpuがパー
        if i < k:
            hands.append("s")
            ans += S
        # k回目以上のじゃんけんでかつk回目にチョキを出していない
        elif i >= k and hands[i-k] != "s":
            hands.append("s")
            ans += S
        else:
            hands.append("z")
    if t[i] == "s":
        # cpuがチョキ
        if i < k:
            hands.append("r")
            ans += R
        # k回目以上のじゃんけんでかつk回目にパーを出していない
        elif i >= k and hands[i-k] != "r":
            hands.append("r")
            ans += R
        else:
            hands.append("z")
print(ans)
