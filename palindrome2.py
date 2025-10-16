lower, upper = map(int, input().split())
count = 0
for num in range(lower, upper + 1):
    if str(num) == str(num)[::-1]:
        count += 1
print(count)
