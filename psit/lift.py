"""lift"""
def main():
    """lift"""
    num_1 = int(input())
    num_2 = int(input())
    while True:
        lift = str(input())
        if lift == "UP":
            num_2 += 1
            if num_2 >= num_1:
                num_2 = num_1
        elif lift == "DOWN":
            if num_2 > 1:
                num_2 -= 1
            elif num_2 == 1:
                num_2 = 1
        elif lift == "END":
            break
    print(num_2)
main()
