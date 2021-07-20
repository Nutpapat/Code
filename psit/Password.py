"""PSIT"""
import hashlib
def main():
    """ Main function """
    print(hashlib.sha512(bytes(input(), 'utf-8')).hexdigest().upper())
main()
