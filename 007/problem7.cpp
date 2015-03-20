// vim: set fileencoding=utf-8
// File:     problem7.cpp
// Author:   Yusuke Sasaki <y_sasaki@nuem.nagoya-u.ac.jp>
// URL:      http://y-sasaki-nuem.github.io/
// License:  MIT License
// Created:  2015-03-13T01:40:14

// output:
// nth_prime(6) = 13	(in 0 secs)
// nth_prime(10001) = 104743	(in 1.048 secs)

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <boost/timer.hpp>
using namespace std;

template <size_t N>
void next_prime(long long (&primes)[N], int& i)
{
    for (int v = primes[i] + 1; v <= numeric_limits<long long>::max(); ++v)
    {
        if (all_of(primes, primes+i+1, [=](long long p){ return v%p != 0; })) {
            primes[++i] = v;
            return;
        }
    }
    throw std::logic_error("next prime is not found.");
}

template <size_t N>
long long nth_prime()
{
    boost::timer t;

    long long primes[N] = {0};
    primes[0] = 2L;
    
    for (int i = 0; i < N - 1; next_prime(primes, i));
    
    cout << "nth_prime("<<N<<") = "<<primes[N-1]<<"\t(in "<<t.elapsed()<<" secs)\n";
}


int main(int argc, char** argv)
{
    nth_prime<6>();
    nth_prime<10001>();
}

