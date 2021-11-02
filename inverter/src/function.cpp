#include <iostream>
#include <array>
using std::cout;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    int start = 0, end = arr.size() - 1;
    
    // for(int n = 0; n <= end; n++) {
    //     cout << arr[n] << '\n';
    // }
    while(start < end) {
        std::string tempVar = arr[start];
        arr[start] = arr[end];
        arr[end] = tempVar;
        start++;
        end--;
    }
}
