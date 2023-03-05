num_cases = int(input())
alphabet = 'abcdefghijklmnopqrstuvwxyz'


def findPosition(string, tam):
    string = sorted(string)
    for i, letter in enumerate(alphabet):
        if string[tam-1] == letter:
            print(i+1)


for i in range(0, num_cases):
    string_length = (int(input()))
    string = input()
    findPosition(string, string_length)
