num_cases = int(input())


def beautyVerifier(size1, size2):
    string1 = input()
    string2 = input()

    flaw_count = 0
    check = True

    for i in range(0, size1-1):
        if string1[i] == string1[i+1]:
            check = False
            flaw_count += 1

    for i in range(0, size2-1):
        if string2[i] == string2[i+1]:
            check = False
            flaw_count += 1

    if check:
        print('YES')
    else:
        if flaw_count > 1 or string1[size1-1] == string2[size2-1]:
            print('NO')
        else:
            print('YES')


for i in range(0, num_cases):
    size1, size2 = map(int, (input().split(' ')))
    beautyVerifier(size1, size2)
