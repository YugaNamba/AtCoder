n = int(input())

s = str(n)
count = 0
for i in range(len(s)):
    count += int(s[i])

print("Yes" if n % count == 0 else "No")
