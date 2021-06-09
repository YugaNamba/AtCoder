a = [list(map(int, input().split())) for _ in range(3)]

n = int(input())

bingo = [[0] * 3 for _ in range(3)]

for _ in range(n):
    b = int(input())
    for i in range(3):
        for j in range(3):
            if a[i][j] == b:
                bingo[i][j] = 1

ok = False

for i in range(3):
    count = 0
    for j in range(3):
        count += bingo[i][j]
    if count == 3:
        ok = True
for i in range(3):
    count = 0
    for j in range(3):
        count += bingo[j][i]
    if count == 3:
        ok = True
count = 0
for i in range(3):
    count += bingo[i][i]
    if count == 3:
        ok = True
count = 0
for i in range(3):
    count += bingo[2-i][i]
    if count == 3:
        ok = True

print("Yes" if ok else "No")
