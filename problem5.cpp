// vim: set fileencoding=utf-8
// File:     problem5.cpp
// Author:   Yusuke Sasaki <y_sasaki@nuem.nagoya-u.ac.jp>
// URL:      http://y-sasaki-nuem.github.io/
// License:  MIT License
// Created:  2015-03-13T01:13:03

// output:
// result = 232792560

#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
T& max_ref(T& x, T& y) { return (x > y) ? x : y; }

int gcd(int x, int y)
{
    while (max(x,y) % min(x,y) > 0)
        max_ref(x,y) = max(x,y) % min(x,y);
    return min(x,y);
}

int main(int argc, char** argv)
{
    int result = 1;
    for (int i = 1; i <= 20; ++i)
        result *= i / gcd(i, result);

    cout << "result = " << result << endl;
}

