import math

n, k = map(int, input().split())

a = list(map(int, input().split()))

n -= 1
k -= 1
ans = (n + k - 1) // k

print(ans)
