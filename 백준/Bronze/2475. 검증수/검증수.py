num = list(map(int, input().split()))
ans = 0

for i in num:
    ans += i*i

print(ans%10)