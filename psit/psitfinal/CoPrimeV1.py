"""CoPrimeV1"""
def main():
    """ Main function """
    hcf = find_hcf(int(input()), int(input()))
    print("YES"*(hcf == 1) + "NO"*(not hcf == 1))
    print(hcf)
def find_hcf(num_a, num_b):
    """ Find the highest common factor """
    hcf = 1 #Starts with lowest possible HCF
    for i in range(1, max(num_a, num_b)+1):
        if num_a % i == 0 and num_b % i == 0:
            hcf = i
    return hcf
main()