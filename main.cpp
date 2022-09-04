// простейший способ реализации циклического буфера

#include "circularBuffer.h"
#include <iostream>

int main() {

    circularBuffer<int> cb(5);

    cb.push(1);
    cb.push(2);
    cb.push(3);
    cb.push(4);
    cb.push(5);
    cb.push(6);
    cb.push(7);

    for (int i = 0; i < 5; ++i) {
        std::cout << cb.getElem();
    }



    return 0;
}
