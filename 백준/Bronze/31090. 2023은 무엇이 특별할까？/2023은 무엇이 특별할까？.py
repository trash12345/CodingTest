T = int(input())
for _ in range (T):
    num = int(input())
    print("Good" if (num + 1) % (num % 100) == 0 else "Bye")