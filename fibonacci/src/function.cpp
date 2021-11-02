#include "function.h"
#include <iostream>
using std::cout;

std::vector<unsigned int> fib_below_n( unsigned int n )
{

    if( n <= 1)
        return std::vector<unsigned int>{};

    std::vector<unsigned int> numbers = {1,1};
    int k = 2, a = 1, b = 1;
    while(k < n) {
        int sum = a + b;
        a = b;
        b = sum;
        if(b >= n) break;
        numbers.push_back(b);
        k = b;
    }

    return numbers;
}
