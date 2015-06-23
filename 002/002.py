#!/usr/bin/env python 

N = 4000000
f1,f2 = 1,1
answer = 0

while f2 < N:
    if f2 % 2 == 0:
        answer += f2
    # update fibonatti number
    f2 += f1
    f1 = f2 - f1

print(answer)
