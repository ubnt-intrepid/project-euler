from math import log, ceil 

def isPalindrome(val, base=10):
    def digit(d):
        return int(val / (base**d))%base

    n = ceil(log(val, base))
    return all(digit(i) == digit(n-1-i) for i in range(int(n / 2)))


p1, p2 = 0, 0
for i in range(100, 1000):
    for j in range(i, 1000):
        if isPalindrome(i*j) and p1 * p2 < i * j:
            p1, p2 = i, j

print(p1 * p2, '=', p1, 'x', p2)
