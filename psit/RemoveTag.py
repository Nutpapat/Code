"""RemoveTag"""
def main():
    """ Main function """
    text = input()
    text_cleared = ''
    is_intag = False
    for i in text:
        if i == '<':
            is_intag = True
        elif i == '>':
            is_intag = False
            text_cleared += " "
        elif is_intag:
            pass
        else:
            text_cleared += i
    print(text_cleared.split())
main()