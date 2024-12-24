mo = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
while True:
    cnt = 0
    tmp = input()
    if tmp == '#':
        break
    for i in tmp:
        if i in mo:
            cnt += 1
    print(cnt)