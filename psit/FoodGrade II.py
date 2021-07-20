"""PSIT"""
def main():
    """ Main function """
    box_size, chickens = int(input()), sorted([int(i) for i in input().split()])
    chickens_size, chickens_count = 0, 0
    for i in chickens:
        if chickens_size + i <= box_size:
            chickens_size += i
            chickens_count += 1
        else:
            break
    print(chickens_count)

main()
