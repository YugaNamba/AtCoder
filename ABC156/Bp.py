n, k = map(int, input().split())

count = 0
print(n, k)

while n > 0:
    n //= k
    count += 1

print(3/2)

print(count)
