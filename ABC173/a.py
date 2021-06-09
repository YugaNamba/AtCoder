n = int(input())

# while n >= 1000:
#     n -= 1000
#     n = max(n, 0)

print((1000 - n % 1000) % 1000)

# print(n)
