"""CaesarV1"""
def main():
    """ Main function """
    decode, text = int(input()), input()
    text_new = ''
    for i in text:
        if i.isalpha() and i.isupper():
            i = chr(ord(i)+decode)
            while ord(i) < ord('A'):
                i = chr(ord(i)+26)
            while ord(i) > ord('Z'):
                i = chr(ord(i)-26)
        elif i.isalpha() and i.islower():
            i = chr(ord(i)+decode)
            while ord(i) < ord('a'):
                i = chr(ord(i)+26)
            while ord(i) > ord('z'):
                i = chr(ord(i)-26)
        text_new += i
    print(text_new)
main()