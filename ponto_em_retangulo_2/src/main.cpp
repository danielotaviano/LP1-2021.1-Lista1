/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.

bool isValid(const Ponto &IE, const Ponto &SD) {
    return IE.x != SD.x or IE.y != SD.y;
}



int main(void)
{
    int x1,y1,x2,y2,x3,y3;


    while(cin >> std::ws >> x1 && cin >> std::ws >> y1 && cin >> std::ws >> x2 && cin >> std::ws >> y2 && cin >> std::ws >> x3 && cin >> std::ws >> y3) {
        const Ponto IE = {x1,y1}, SD = {x2,y2}, P = {x3,y3};


        if(isValid(IE, SD)) {
        const location_t position = pt_in_rect( IE, SD, P);

        if(position == 0)
            cout << "inside" << '\n';
        if(position == 1)
            cout << "border" << '\n';
        if(position == 2)
            cout << "outside" << '\n';
        }
    }
    
    return 0;
}
