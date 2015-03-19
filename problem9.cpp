// vim: set fileencoding=utf-8
// File:     problem9.cpp
// Author:   Yusuke Sasaki <y_sasaki@nuem.nagoya-u.ac.jp>
// URL:      http://y-sasaki-nuem.github.io/
// License:  MIT License
// Created:  2015-03-20T01:17:51

// output:
// (a,b,c) = (200,375,425)
// abc = 31875000

#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    int N = 1000;

    int k = 0;
    for (int a = 1;     a < N - 2; ++a)
    for (int b = a + 1; b < N - 1; ++b)
    {
        long c = N - (a + b);    // a + b + c = 1000
        if (a*a + b*b == c*c)
        {
            cout << "(a,b,c) = (" << a << "," << b << "," << c << ")\n";
            cout << "abc = " << a*b*c << endl;
            k++;
        }
    }
    assert(k == 1);

    return 0;
}

