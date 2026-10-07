# cook your dish here
t = int(input())
while t:
    n, m = map(int, input().split())
    s = input().strip()
    l = set(input().strip())
    best = 0
    cur = 0
    prev = None
    for ch in s:
        hand = ch in l
        if hand == prev:
            cur += 1
        else:
            cur = 1
            prev = hand
        best = max(best, cur)
    print(best)
    t-=1