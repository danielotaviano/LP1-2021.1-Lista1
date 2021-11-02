/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


bool isHighest(int n1, int n2) {
    if(n1 > n2) return true;
    return false;
}


void handle(int n1, int n2) {


    if(n2 == 0){
        cout << n1 << '\n';
        return;
    }
    int sumNumbers = n1 + n2;
    int direction = sumNumbers + (sumNumbers < 0 ? 1 : -1);

    int sum = 0, count = 0;
    for(int n = n1; count < abs(n2); isHighest(n1, direction) ? n-- : n++) {
        count++;
        sum += n;
    }


    cout << sum << '\n';
}


int main( void )
{
  
    int in1, in2;
    while(cin >> std::ws >> in1 && cin >> std::ws >> in2) {
        handle(in1, in2);
        // cout << in1 << '\n'
    }
    
    return 0;
}
