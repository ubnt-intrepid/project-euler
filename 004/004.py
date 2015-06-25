from itertools import product

def isPalindrome(val, base=10):
    def digit(d):
        return int(val / (base**d)) % base 

    n = 1
    tmp = val 
    while int(tmp / base) > 0:
        tmp /= base 
        n += 1

    return all(digit(i) == digit(n - 1 - i) for i in range(int(n/2)))

p1,p2=0,0
for i, j in product(reversed(range(100, 1000)), repeat=2):
    if isPalindrome(i*j) and p1*p2 < i*j:
        p1,p2=i,j

print(p1*p2, p1, p2)
