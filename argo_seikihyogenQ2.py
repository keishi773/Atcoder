import re
s = input()
pa = r'^metho+d$'
a = re.search(pa,s)
if a:
    print("Yes")
else:
    print("No")