P, K = map(int, input().split())
cnt = 0
for i in range(2,K):
    if P % i == 0:
        print("BAD", i)
        break
    else:
        cnt += 1
if cnt == K-2:
    print("GOOD")