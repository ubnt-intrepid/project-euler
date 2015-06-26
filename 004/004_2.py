#!/usr/bin/env python 

problem4 = max(i*j for i in range(100, 1000+1) for j in range(i, 1000+1) \
               if str(i*j) == str(i*j)[::-1])
print(problem4)
