num_cases = int(input())

def stringVerifier():
    cur = 1
    fb_string = ''
    while len(fb_string) < 100:
        if cur % 3 == 0:
            fb_string += 'F'
        if cur % 5 == 0:
            fb_string += 'B'
        cur += 1

    string = input()

    if string in fb_string:
        print('YES')
    else:
        print('NO')


for i in range(0, num_cases):
    string_length = int(input())
    stringVerifier()
