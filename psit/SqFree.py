"""SqFree"""
import math
    def main():
    """ Main function """
    num = int(input())
    sq_free = 0
    for i in range(1, num+1):
        sq_free += check_sq_free(i)
    print(sq_free)
def check_sq_free(num):
    """ Check if the number is square free """
    sq_free = True
    for i in range(2, int(math.sqrt(num))+1):
        if num % i**2 == 0:
            sq_free = False
            break
    return sq_free
main()