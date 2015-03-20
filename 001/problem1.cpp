// g++ -std=c++11 problem1.cpp && ./a.exe 
// output:
// result (N=10):   23
// result (N=1000): 233168

#include <iostream>

int problem1(int N)
{
    int result = 0;
    for (int i = 1; i < N; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            result += i;
        }
    }
    return result;
}

int main(int argc, char const* argv[])
{
    std::cout << "result (N=10):   " << problem1(10)   << std::endl;
    std::cout << "result (N=1000): " << problem1(1000) << std::endl;
    return 0;
}
