N, A, B = map(int, input().split())

def digitSum(n):
    s = str(n)
    array = list(map(int, s))
    return sum(array)


ans: int = 0
for i in range(1, N + 1):
    s = digitSum(i)
    if A <= s <= B:
        ans += i
print(ans)
