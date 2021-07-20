"""isPrime_large"""
import math
def main():
    """ Main function """
    num = int(input())
    is_prime = num >= 2
    for i in range(2, int(math.sqrt(num))+1):
        if num % i == 0:
            is_prime = False
            break
    if is_prime:
        print("YES")
    else:
        print("NO")
main()