// vim: set fileencoding=utf-8
// File:     problem6.cpp
// Author:   Yusuke Sasaki <y_sasaki@nuem.nagoya-u.ac.jp>
// URL:      http://y-sasaki-nuem.github.io/
// License:  MIT License
// Created:  2015-03-13T01:28:19

// output:
// result = 22
// result = 350
// result = 25164150

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
    long tmp = static_cast<long>(n + 1 + n%2)*(n/2) + (n%2);
    return tmp*tmp;
}

inline long problem6(int n) { return square_of_sum(n) - sum_of_square(n); }

int main(int argc, char** argv)
{
    cout << "result = " << problem6(3) << endl;
    cout << "result = " << problem6(6) << endl;
    cout << "result = " << problem6(100) << endl;
}

