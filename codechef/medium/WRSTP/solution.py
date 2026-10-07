# cook your dish here
t = int(input())
while t:
    n = int(input())
    s = input().strip()
    x = s.count('R') - s.count('L')
    y = s.count('U') - s.count('D')
    ok = False
    if x == 0 and y == 2 and 'U' in s:
        ok = True
    elif x == 0 and y == -2 and 'D' in s:
        ok = True
    elif y == 0 and x == 2 and 'R' in s:
        ok = True
    elif y == 0 and x == -2 and 'L' in s:
        ok = True
    print("YES" if ok else "NO")
    t-=1