"""CircularPrime"""
def main():
    """ Main function """
    num = int(input())
    circular_primes = list()
    for i in range(2, num+1):
        if i in circular_primes:
            continue
        elif check_circular(create_circular(i)):
            circular_primes.append(i)
    print(sum(circular_primes))
def create_circular(num):
    """ Create circular number """
    num = str(num)
    circulars = list()
    for _ in range(len(num)):
        circulars.append(int(num))
        num = num[1::] + num[0]
    return circulars
def check_circular(circulars):
    """ Check all list members of circular number if they're all prime """
    for i in circulars:
        if check_prime(i) == False:
            return False
    return True
def check_prime(num):
    """ Check number if it's prime number """
    is_prime = (num >= 2)
    for i in range(2, int(num**0.5)+1):
        if num % i == 0:
            return False
    return is_prime
main()