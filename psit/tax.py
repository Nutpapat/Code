"""[Final Recommend]ProgressiveTax"""
def main():
    """ cal tax """
    money = int(input())
    tax = 0
    #ก้อนเเรกเข้าตัวไหน
    while money > 150000:
        if money > 4000000:
            money -= 4000000
            tax += money*0.35
            money = 4000000
        elif money > 2000000 and money <= 4000000:
            money -= 2000000
            tax += money*0.30
            money = 2000000
        elif money > 1000000 and money <= 2000000:
            money -= 1000000
            tax += money*0.25
            money = 1000000
        elif money > 750000 and money <= 1000000:
            money -= 750000
            tax += money*0.20
            money = 750000
        elif money > 500000 and money <= 750000:
            money -= 500000
            tax += money*0.15
            money = 500000
        elif money > 300000 and money <= 500000:
            money -= 300000
            tax += money*0.10
            money = 300000
        elif money > 150000 and money <= 300000:
            money -= 150000
            tax += money*0.05
            money = 150000
        else:
            money += 0
            tax += 0
    if tax == 0:
        print(0)
    else:
        print(int(tax))
main()
