"""FourDirections"""
def main():
    """ Main function """
    direction = input()
    for i in range(5):
        for j in direction:
            if j == 'U':
                if i == 1:
                    print('  *  ')
                elif i == 2:
                    print(' *** ')
                elif i == 3:
                    print('* * *')
                elif i == 4:
                    print('  *  ')
                elif i == 5:
                    print('  *  ')
                    print(end="")
            elif j == 'D':
                if i == 1:
                    print('  *  ')
                elif i == 2:
                    print('  *  ')
                elif i == 3:
                    print('* * *')
                elif i == 4:
                    print(' *** ')
                elif i == 5:
                    print('  *  ')
            elif j == 'L':
                print('  *  '+' *   '+'*****'+' *   '+'  *  ')
            elif j == 'R':
                print('  *  '+'   * '+'*****'+'   * '+'  *  ')            
        print(end="")
    print()
main()
