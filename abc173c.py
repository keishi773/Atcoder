from collections import deque



h,w,k = map(int, input().split())
# gridを作成する
c = []
for gyou in range(h):
    # 文字列
    tmp = input()
    # 文字列を配列に置換
    tmp = list(tmp)
    # 二次元配列の形で持つ
    c.append(tmp)
ans = 0
# bit全探索　縦 & 横
for gyou_red in range(1<<h):
    for retu_red in range(1<<w):
        black = 0

        # gridの中を探索する 赤く塗られていない黒 = #のマスがあればカウント
        for gyou in range(h):
            for retu in range(w):
                if gyou_red >> gyou & 1 == 0 and retu_red >> retu & 1 == 0:
                    if c[gyou][retu] == "#":
                        black += 1
        if black == k:
            ans += 1
print(ans)
