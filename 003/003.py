import random

N = 600851475143

def gcd(a, b):
    while b > 0:
        a, b = b, a % b
    return a

def factorize(N):
    " N の素因数分解を求める (Pollard's rho algorithm) "
    factors = []
    while N >= 2: 
        d = 1
        while d == 1:
            x = random.randint(1, N)
            y = random.randint(1, N)
            d = gcd(abs(x-y), N)
            d = int(d)
        if d < N:
            factors.append(d)
            N /= d
        elif d == N:
            factors.append(d)
            break
    return factors

factors = list(sorted(factorize(N)))

print(factors[-1])
