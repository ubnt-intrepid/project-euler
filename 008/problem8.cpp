// vim: set fileencoding=utf-8
// File:     problem8.cpp
// Author:   Yusuke Sasaki <y_sasaki@nuem.nagoya-u.ac.jp>
// URL:      http://y-sasaki-nuem.github.io/
// License:  MIT License
// Created:  2015-03-17T00:01:27

#include <iostream>
#include <string>
#include <numeric>
using namespace std;

long long calc_product(string input, int index)
{
    return accumulate(input.begin()+index, input.begin()+index+13, 1L,
                      [](long long acc, char c)->long long{return acc*(c-'0');});
}

int main(int argc, char** argv)
{
    string input = 
        "73167176531330624919225119674426574742355349194934"
        "96983520312774506326239578318016984801869478851843"
        "85861560789112949495459501737958331952853208805511"
        "12540698747158523863050715693290963295227443043557"
        "66896648950445244523161731856403098711121722383113"
        "62229893423380308135336276614282806444486645238749"
        "30358907296290491560440772390713810515859307960866"
        "70172427121883998797908792274921901699720888093776"
        "65727333001053367881220235421809751254540594752243"
        "52584907711670556013604839586446706324415722155397"
        "53697817977846174064955149290862569321978468622482"
        "83972241375657056057490261407972968652414535100474"
        "82166370484403199890008895243450658541227588666881"
        "16427171479924442928230863465674813919123162824586"
        "17866458359124566529476545682848912883142607690042"
        "24219022671055626321111109370544217506941658960408"
        "07198403850962455444362981230987879927244284909188"
        "84580156166097919133875499200524063689912560717606"
        "05886116467109405077541002256983155200055935729725"
        "71636269561882670428252483600823257530420752963450"
    ;

    long long pmax = 0L;
    int index = 0;
    for (int i = 0; i < input.size() - 13; ++i) {
        long long p = calc_product(input, index);
        if (p > pmax) {
            pmax = p;
            index = i;
        }
    }

    cout << "index: "   << index << endl;
    cout << "product: " << calc_product(input, index) << "=";
    
    cout << static_cast<int>(input[index]-'0');
    for (int i = 1; i < 13; ++i) {
        cout << "x" << static_cast<int>(input[index+i]-'0');
    }
    cout << endl;

    return 0;
}

