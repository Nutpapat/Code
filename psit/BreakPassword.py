"""PSIT"""
import hashlib

def main():
    """ Main function """
    password = input()
    for i in range(0, 100000):
        if password == hashlib.sha512(bytes(str("%05i"%i), 'utf-8')).hexdigest().upper():
            print("%05i"%i)
            break

main()
