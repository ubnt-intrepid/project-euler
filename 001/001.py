#!/usr/bin/env python
# vim: set fileencoding=utf-8
#
# File:     001.py
# Author:   Yusuke Sasaki <y_sasaki@nuem.nagoya-u.ac.jp>
# License:  MIT License
# Created:  2015-06-23T18:31:32

import sys 
N = 10
if len(sys.argv) > 1:
    N = int(sys.argv[1]) 

if __name__ == '__main__':
    answer = sum(c for c in range(N) if c % 3 == 0 or c % 5 == 0)
    print(answer)
   
