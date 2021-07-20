"""Median"""
def main():
    """ Main function """
    data = sorted([float(input()) for _ in range(int(input()))])
    while len(data) > 2:
        data = data[1:-1]
    print("%.1f"%(sum(data)/len(data)))
main()