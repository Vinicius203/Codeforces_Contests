pi = '314159265358979323846264338327'

num_cases = int(input())
count = 0

for i in range(0, num_cases):
    string = input()
    for j in range(0, len(string)):
        if pi[j] != string[j]:
            break
        else:
            count += 1

    print(count)
    count = 0
