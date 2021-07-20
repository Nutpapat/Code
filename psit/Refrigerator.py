"""PSIT"""
def main():
    """ Main function """
    food_count = int(input())
    food_days = [int(i) for i in input().split()]
    days = 0
    if food_count == len(food_days):
        while (0 in food_days) == False:
            food_days = sorted(food_days)
            for i in range(1, len(food_days)):
                food_days[i] -= 1
            days += 1
    print(days)
main()
