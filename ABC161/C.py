def readInts():
    return list(map(int, input().split()))


n, m = readInts()
ans = min(n % m, abs(n % m - m))
print(ans)
