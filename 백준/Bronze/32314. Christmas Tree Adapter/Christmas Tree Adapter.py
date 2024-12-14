X = int(input())
watt, volt = map(int, input().split())
print(1 if watt/volt >= X else 0)