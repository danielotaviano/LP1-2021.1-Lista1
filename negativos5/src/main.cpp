#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int count = 0;
    for (int n = 0; n < SIZE; n++) {
        int number;
        cin >> number;
        if(number < 0) count++;
    };
    cout << count;
    
    return 0;
}
