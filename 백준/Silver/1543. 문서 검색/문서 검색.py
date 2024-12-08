import sys
S = sys.stdin.readline().strip()
target = sys.stdin.readline().strip()
i = 0
cnt = 0
while i < len(S):
    if S[i:i+len(target)] == target:
        i += len(target)
        cnt += 1
    else :
        i += 1
print(cnt)