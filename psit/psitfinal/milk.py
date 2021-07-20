"""Milk"""
def main():
    """ Main function """
    price = float(input())
    promo_require = float(input())
    promo_free = float(input())
    wallet = float(input())
 
    bottle = wallet/price
    cap = bottle
    while cap >= promo_require and promo_require > 0:
        free_bottle = (cap//promo_require)*promo_free
        cap = cap % promo_require
        cap += free_bottle
        bottle += free_bottle
    print(int(bottle))
main()
