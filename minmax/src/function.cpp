#include "function.h"
#include "stddef.h"
#include <iostream>
using std::cout;
/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{
    if(n == 0) return {-1, -1};
    int min = 0, max = 0;

    for(int l = 0; l < n; l++) {
        if(V[l] < V[min]) min = l;

        if(V[l] >= V[max]) max = l;
    }

    return { min, max };
}
