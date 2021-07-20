"""LineSorting"""
def main():
    """ Main function """
    #Stores length of the text and the text itself.
    text_set = dict()
    for _ in range(int(input())):
        text = input()
        text_set[len(text)] = text
    for _ in range(len(text_set)):
        print(text_set.pop(min(text_set)))
main()