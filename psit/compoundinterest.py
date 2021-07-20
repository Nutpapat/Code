"""PSIT"""
def main():
    """ Main function """
    money, interest = int(input()), float(input())/100+1
    for _ in range(int(input())):
        money *= interest
    print("%.2f"%money)
main()