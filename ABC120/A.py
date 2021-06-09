a, b, c = map(int, input().split())
ans = b // a
ans = min(ans, c)

if ans > c:
    ans = c
print(ans)
