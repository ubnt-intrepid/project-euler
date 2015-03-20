// g++ -std=c++11 problem2.cpp && ./a.exe
// output:
// sum = 4613731

#include <iostream>

int problem2(int num)
{
    int sum = 0;
    for (int f1 = 1, f2 = 1; f2 < num; f2 += f1, f1 = f2 - f1) {
        if (f2 % 2 != 0)
            sum += f2;
    }
    return sum;
}

int main(int argc, char const* argv[])
{
    std::cout << "sum = " << problem2(4000000) << std::endl;
}
