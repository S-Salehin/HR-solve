def minion_game(string):
    vowels = 'AEIOU'
    kevsc = 0
    stusc = 0
    for i in range(len(string)):
        if string[i] in vowels:
            kevsc += len(string) - i
        else:
            stusc += len(string) - i
    if kevsc > stusc:
        print("Kevin " + str(kevsc))
    elif kevsc < stusc:
        print("Stuart " + str(stusc))
    else:
        print("Draw")

if __name__ == '__main__':
    s = input()
    minion_game(s)