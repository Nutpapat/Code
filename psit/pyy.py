"""[Final Recommend]Safe"""
def main():
    student = dict()
    while True:
        info = input()
        if info == 'End':
            break
        elif (int(info[0:2]), int(info[2:4])in student):
            student[int(info[0:2]), int(info[2:4])] += 1
        else:
            student[int(info[0:2]), int(info[2:4])] = 1
    yearpre = None
    for fac, year in sorted(student):
        print("--"if year == yearpre else year, end= ' ')
        print(fac, student[(year, fac)])
        yearpre = year
main()
