"""PSIT"""
def main():
    """ Main function """
    text = input()
    _ = [print(text[0:i]) for i in range(1, len(text)+1)]
main()
