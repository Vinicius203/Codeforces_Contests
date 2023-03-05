num_cases = int(input())


def trueMeow(string, meow_length):
    alphabet = 'meow'
    intrusive_letter = False
    string = string.lower()

    for letter in string:
        if letter not in alphabet:
            intrusive_letter = True

    if intrusive_letter:
        print('NO')

    else:
        indexValidator(string, meow_length)


def indexValidator(string, meow_length):
    if string.rfind('m') - string.find('e') == -1 and string.rfind('e') - string.find('o') == -1 and string.rfind('o') - string.find('w') == -1 and string.rfind('w') - meow_length == -1:
        print('YES')
    else:
        print('NO')


for i in range(0, num_cases):
    meow_length = int(input())
    meow_string = input()
    trueMeow(meow_string, meow_length)
