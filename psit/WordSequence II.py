"""PSIT"""
def main():
    """ Main function """
    text_a, text_b = input(), input()
    words = [text_b[0:min(len(text_b), i)] for i in range(0, max(len(text_a), len(text_b))+1)]

    for i in range(0, max(len(text_a), len(text_b))+1):
        words[i] += text_a[min(i, len(text_a))::]

    _ = [print(i) for i in words]

main()
