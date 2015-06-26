// vim: set fileencoding=utf-8
// File:     004_2.cpp
// Author:   Yusuke Sasaki <y_sasaki@nuem.nagoya-u.ac.jp>
// URL:      http://y-sasaki-nuem.github.io/
// License:  MIT License
// Created:  2015-03-12T23:34:22

// output:
// 906609

#include <algorithm>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char** argv)
{
    int problem4 = 0;
    for (int i = 999; i > 99; --i)
    for (int j = 999; j > i;  --j)
    {
        stringstream sstr; sstr << i*j;
        string s = sstr.str();
        string r = s; reverse(r.begin(), r.end());
        if (s == r)
            problem4 = max(i*j, problem4);
    }
    cout << problem4 << endl;
}
