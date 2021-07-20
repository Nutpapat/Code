"""Key_Midterm2014"""
def main():
    """Show Output"""
    text = input()
    result = ((sum([int(i) for i in text]) + int(text[-3::])*10))
    if result < 1000:
        result += 1000
    print(str(result)[-4::])
main()