from itertools import product

def num_of_digits(val, base):
    " 基数 base のもとでの桁数を求める "
    n = 1
    while int(val / base) > 0:
        val /= base 
        n += 1
    return n

def isPalindrome(val, base=10):
    def digit(d):
        ' d 桁目の数字 '
        return int(val / (base**d)) % base 

    n = num_of_digits(val, base)

    return all(digit(i) == digit(n - 1 - i) for i in range(int(n/2)))

p1,p2=0,0
for i, j in product(reversed(range(100, 1000)), repeat=2):
    if isPalindrome(i*j) and p1*p2 < i*j:
        p1,p2=i,j

print(p1*p2, '=', p1, 'x', p2)
