num_cases = int(input())
string1 = ''
string2 = ''


def distinctSplit(string, tam):
    max = 0
    for i in range(0, tam):
        string1 = string[0:i+1]
        string2 = string[i+1:len(string)]

        string1_unica = "".join(set(string1))
        string2_unica = "".join(set(string2))

        comparison = len(string1_unica) + len(string2_unica)
        if comparison > max:
            max = comparison
            if max == tam:
                return print(tam)
    print(max)


for i in range(0, num_cases):
    len_string = int(input())
    string = input()
    distinctSplit(string, len_string)
