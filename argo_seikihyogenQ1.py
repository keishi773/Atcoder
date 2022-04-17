import re
s = input()
pattern = r'algo'
result = re.search(pattern, s)
if result:
    print("Yes")
else:
    print("No")