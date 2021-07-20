"""
Catalan
"""
 
def catalan(num):
    """ Find catalan number """
    return (4*(num-1)+2)/(num-1+2)*catalan(num-1) if num > 2 else num
print(int(catalan(int(input()))))