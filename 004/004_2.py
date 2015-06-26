#!/usr/bin/env python 

problem4 = max(i*j for i in range(100, 1000+1) for j in range(i, 1000+1) \
               if str(int(i*j)) == str(int(i*j))[::-1])
print(problem4)
