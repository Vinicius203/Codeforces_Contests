num_cases = int(input())
sequence = ''

for i in range(0, num_cases):
    sequence = input().split(' ')
    sequence = sorted(sequence)
    print(sequence)
    print(sequence[1])
