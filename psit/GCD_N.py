"""GCD_N"""
def main():
    """ Main function """
    numbers, divisors = list(), list()
    for _ in range(int(input())):
        numbers.append(int(input()))
    #Calculate all divisors available
    end = False
    while True:
        num = 2
        while True:
            if is_dividable(numbers, num):
                divide_all(numbers, num)
                divisors.append(num)
                break
            elif num > min(numbers):
                end = True
                break
             num += 1
        if end:
            break
    print(multiply_all(divisors))
def is_dividable(numbers, divisor):
    """ Check if all numbers in a list can be divided by a certain number """
    for i in numbers:
        if i % divisor != 0:
            return False
    return True
def divide_all(numbers, divisor):
    """ Divide all numbers in a list with a certain number """
    for i in range(len(numbers)):
        numbers[i] //= divisor
def multiply_all(numbers):
    """ Multiply all numbers in a list """
    num = 1
    for i in numbers:
        num *= i
    return num
main()
