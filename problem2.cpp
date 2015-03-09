// g++ -std=c++11 problem2.cpp && ./a.exe
// output:
// sum = 4613731

#include <iostream>

int main(int argc, char const* argv[])
{
    int sum = 0;

    for (int f1 = 1, f2 = 1; f2 < 4000000; f2 += f1, f1 = f2 - f1) {
        if (f2 % 2 != 0)
            sum += f2;
    }
    std::cout << "sum = " << sum << std::endl;
    return 0;
}
