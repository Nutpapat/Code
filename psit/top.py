"""
PSIT Pair-Programming : 24th August 2017
#1 - Surat Suwannasit (60070108)
#2 - Teerapat Kraisrisirikul (60070183)
"""
 
import math
 
def main():
    """Main function"""
    sina = (math.sin(math.radians(90)) + math.sin(math.radians(60))**2)
    print(sina/(math.cos(math.radians(245**2)) + math.cos(math.radians(45+135))))
    print((math.factorial(16)*math.factorial(4))/math.factorial(8))
    print((15+25)/math.sqrt((25-12)**2+(12-15)**2))
    print(math.log10(1234**4))
    func5_0 = math.log(4234, 5) + math.log2(8191) + 71*math.log10(156154)
    func5_1 = math.log(777, 7) - math.log(888, 8) - math.log(999, 9)
    print(func5_0/func5_1)
 
main()