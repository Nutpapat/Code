"""Perfect"""
import math
def main():
    """ Main function """
    num = int(input())
    perfects = 0
    exp = 2
    while True:
        if check_prime((2**exp)-1) and (2**(exp-1))*((2**exp)-1) <= num:
            perfects += (2**(exp-1))*((2**exp)-1)
        elif (2**(exp-1))*((2**exp)-1) > num:
            break
        exp += 1
    print(perfects)
def check_prime(num):
    """ ... """
    is_prime = bool(num >= 2)
    for i in range(2, int(math.sqrt(num))+1):
        if num % i == 0:
            is_prime = False
            break
    return is_prime
main()