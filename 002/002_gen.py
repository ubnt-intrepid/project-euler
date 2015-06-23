#!/usr/bin/env python 

def fibonatti(n_max=4000000):
    f1, f2 = 1, 1
    while f2 <= n_max:
        yield f2
        f2 += f1
        f1 = f2 - f1

answer = sum(f for f in fibonatti() if f % 2 == 0)
print(answer)
