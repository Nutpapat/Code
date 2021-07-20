"""
Day2011
"""
def main():
    """ Main function """
    day = int(input()) + sum([31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31][0:
    print("Saturday" * (day % 7 == 1), end='')
    print("Sunday" * (day % 7 == 2), end='')
    print("Monday" * (day % 7 == 3), end='')
    print("Tuesday" * (day % 7 == 4), end='')
    print("Wednesday" * (day % 7 == 5), end='')
    print("Thursday" * (day % 7 == 6), end='')
    print("Friday" * (day % 7 == 0), end='')
main()