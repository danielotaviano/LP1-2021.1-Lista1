/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

float percentage(int number, int total) {
    return ((float)number/total)*100;
}

int main(void)
{
    int x;
    float interval1 = 0, interval2 = 0, interval3 = 0, interval4 = 0, outOfInterval = 0, count = 0;
    while(cin >> std::ws >> x) {
        count++;
        if(x >= 0 && x < 25) interval1++;
        if(x >= 25 && x < 50) interval2++;
        if(x >= 50 && x < 75) interval3++;
        if(x >= 75 && x < 100) interval4++;
        if(x >= 100 || x < 0) outOfInterval++;
    }

    cout << std::setprecision(4) << (float) percentage(interval1, count) << '\n';
    cout << std::setprecision(4) << (float) percentage(interval2, count) << '\n';
    cout << std::setprecision(4) << (float) percentage(interval3, count) << '\n';
    cout << std::setprecision(4) << (float) percentage(interval4, count) << '\n';
    cout << std::setprecision(4) << (float) percentage(outOfInterval, count)<< '\n';

    return 0;
}
