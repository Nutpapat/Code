"""
VerticalHistogram
"""
 
def main():
    """ Main function """
    characters = scan_text(input())
    height = max([int(i[1]) for i in characters])
 
    # Main part of histogram
    for level in range(height, 0, -1):
        print('%03i'%level, end=' ')
        _ = [print('*' if i[1] >= level else ' ', end=' ') for i in characters], print()
 
    # Bottom line
    _ = print("   ", end=''), [print(" " + i[0], end='') for i in characters]
 
def scan_text(txt):
    """ Scan text, then add characters to a list """
    chars = list()
    _ = [chars.append([chr(i), txt.count(chr(i))]) for i in range(97, 123) if txt.count(chr(i)) > 0]
    _ = [chars.append([chr(i), txt.count(chr(i))]) for i in range(65, 91) if txt.count(chr(i)) > 0]
    return chars
 
main()