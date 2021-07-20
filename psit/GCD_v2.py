"""GCD_v2"""
def main():
    """ Main function """
    num_a, num_b = int(input()), int(input())
    num_a, num_b = min(num_a, num_b), max(num_a, num_b)
    while True:
        num_a, num_b = num_b % num_a, num_a
        if num_a == 0:
            print(num_b)
            break
main()