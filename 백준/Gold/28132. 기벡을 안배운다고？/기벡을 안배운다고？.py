import sys
from math import gcd
from collections import defaultdict

input = sys.stdin.read

def main():
    data = input().splitlines()
    N = int(data[0])

    cnt = 0
    sum = 0
    ump = defaultdict(int)

    for i in range(1, N + 1):
        x, y = map(int, data[i].split())

        # 영벡터
        if x == 0 and y == 0:
            cnt += 1
            continue
        # 단위벡터
        elif x == 0:
            tmpx, tmpy = 0, 1
        elif y == 0:
            tmpx, tmpy = 1, 0
        # 나머지
        else:
            g = gcd(x, y)
            tmpx, tmpy = x // g, y // g

        sum += ump[(tmpx, tmpy)]
	# 90도 벡터 추가
        ump[(-tmpy, tmpx)] += 1
        ump[(tmpy, -tmpx)] += 1

    print(sum + cnt * (cnt - 1) // 2 + cnt * (N - cnt))

if __name__ == "__main__":
    main()