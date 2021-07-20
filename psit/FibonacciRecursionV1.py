"""FibonacciRecursionV1"""
def main():
    """ Main function """
    print(fibo(int(input())))
def fibo(num):
    """ Fibonacci Recursion """
    if num > 1:
        return fibo(num-1) + fibo(num-2)
    else:
        return num
main()