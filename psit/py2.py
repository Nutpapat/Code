"""Classify"""
def main():
    """ Main function """
    students = dict()
    while True:
        info = input()
        if info == 'END':
            break
        if (int(info[0:2]), int(info[2:4])) in students:
            students[(int(info[0:2]), int(info[2:4]))] += 1
        else:
            students[(int(info[0:2]), int(info[2:4]))] = 1
    year_prev = None
    for year, faculty in sorted(students):
        print("--" if year == year_prev else year, end=' ')
        print(faculty, students[(year, faculty)])
        year_prev = year
main()
