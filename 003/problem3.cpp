// vim: set fileencoding=utf-8
// File:     problem3.cpp
// Author:   Yusuke Sasaki <y_sasaki@nuem.nagoya-u.ac.jp>
// URL:      http://y-sasaki-nuem.github.io/
// License:  MIT License
// Created:  2015-03-12T22:17:36

// output:
// 13195: 5,7,13,29,
// 600851475143: 71,839,1471,6857,

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iterator>

template <class T, class Range>
bool is_prime(T val, Range const& factors) {
    return std::all_of(std::begin(factors), std::end(factors),
            [=](typename Range::value_type const& f){ return val % f != 0; });
}

void problem3(long long value)
{
    using namespace std;
    
    cout << value << ": ";
    
    vector<long long> factors;
    for (int i = 2; i < static_cast<long long>(sqrt(static_cast<double>(value))); ++i)
    {
        if (value % i != 0 || !is_prime(i, factors)) 
            continue;
        factors.push_back(i);
    }

    copy(factors.begin(), factors.end(), ostream_iterator<long long>(cout, ","));
    cout << endl;
}

int main(int argc, char** argv)
{
    problem3(13195L);
    problem3(600851475143L);

    return 0;
}
