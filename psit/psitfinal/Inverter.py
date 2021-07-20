"""PSIT"""
def main():
    """ Main function """
    binary = '0'
    for i in input():
        if i == '1':
            binary += '0'
        else:
            binary += '1'
    print(binary.lstrip("0"))
main()
