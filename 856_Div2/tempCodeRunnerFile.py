num_cases = int(input())
palindrome = ''
teste = 0


def verifyPalindrome(string):
    contador = 0
    string_reversed = []
    for i in range(0, len(string)):
        string_reversed.append(string[i][::-1])

    for i in range (0, len(string)):
        for j in range (len(string_reversed)):
            if (string[i] == string[j] and i != j):
                contador += 1 
                break

    return contador


for i in range(0, num_cases):
    string_length = int(input())
    palindrome = input().split()
    teste = verifyPalindrome(palindrome)
    if teste == len(palindrome):
        print('YES')
    else:
        print('NO')
