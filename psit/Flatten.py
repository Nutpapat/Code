"""Flatten"""
import json
def main():
    """ Main function """
    data = json.loads(input())
    required_score = float(input())
    printed = False
    for each in sorted(data):
        if data[each] >= required_score:
            print("%s\t%.2f"%(each, data[each]))
            printed = True
    if printed == False:
        print("Nope")
main()