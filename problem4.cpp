// vim: set fileencoding=utf-8
// File:     problem4.cpp
// Author:   Yusuke Sasaki <y_sasaki@nuem.nagoya-u.ac.jp>
// URL:      http://y-sasaki-nuem.github.io/
// License:  MIT License
// Created:  2015-03-12T23:34:22

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
using namespace std;

bool is_palindrome(int value, int base = 10)
{
    int n = 1;
    for (int tmp = value; tmp / base > 0; tmp /= base, ++n);

    auto digit_value = [=](int digit) {
        return (value / static_cast<int>(pow(base, digit))) % base;
    };

    for (int i = 0; i < n/2; ++i) {
        if (digit_value(i) != digit_value(n - 1 - i))
            return false;
    }
    return true;
}

int main(int argc, char** argv)
{
    pair<int, int> p;

    for (int i = 999; i > 99; --i)
    for (int j = 999; j > 99; --j)
    {
        if (is_palindrome(i * j) && p.first * p.second < i * j)
            p = make_pair(i, j);
    }

    cout << p.first * p.second << " = " << p.first << " x " << p.second << ".\n";
}

