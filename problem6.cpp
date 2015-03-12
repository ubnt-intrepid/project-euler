// vim: set fileencoding=utf-8
// File:     problem6.cpp
// Author:   Yusuke Sasaki <y_sasaki@nuem.nagoya-u.ac.jp>
// URL:      http://y-sasaki-nuem.github.io/
// License:  MIT License
// Created:  2015-03-13T01:28:19

#include <iostream>
#include <cmath>
using namespace std;

long sum_of_square(int n)
{
    long ret = 0;
    for (int i = 1; i <= n; ++i)
        ret += i*i;
    return ret;
}

long square_of_sum(int n)
{
    long tmp = static_cast<long>(n + 1) * (n/2 + n%2);
    return tmp*tmp;
}

int main(int argc, char** argv)
{
    cout << "result = " << square_of_sum(100) - sum_of_square(100) << endl;
}

