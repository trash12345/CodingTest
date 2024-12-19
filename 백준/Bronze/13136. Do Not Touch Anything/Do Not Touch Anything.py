R, C, N = map(int, input().split())
x = R//N
if R % N != 0:
    x += 1
y = C//N
if C % N != 0:
    y += 1
print(x*y)