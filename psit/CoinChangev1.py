"""CoinChangev1"""
def main():
""" Main function """
    money, coins = int(input()), 0
    for i in (25, 10, 5, 1):
        coins += money//i
        money %= i
    print(coins)
main()