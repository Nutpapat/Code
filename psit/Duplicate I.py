"""Duplicate I"""
def main():
""" Main function """
    print(fibo(int(input()))[0])
def fibo(num):
    """ Fast doubling """
    if num == 0:
        return (0, 1)
    else:
        var_a, var_b = fibo(num//2)
        var_c = var_a * (var_b * 2 - var_a)
        var_d = var_a**2 + var_b**2
    if num % 2 == 0:
        return (var_c, var_d)
    else:
        return (var_d, var_c + var_d)
main()