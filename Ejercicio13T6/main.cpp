//
//  main.cpp
//  Ejercicio13T6
//
//  Created by Dani on 27/03/13.
//  Copyright (c) 2013 Dani. All rights reserved.
//

#include <iostream>
#include "ListaConcatena.h"

int main(int argc, const char * argv[]) {

    ListaConcatena<int> a;
    ListaConcatena<int> b;
    
    for(int i = 0; i < 5; i++) {
        a.ponDr(i);
    }
    
    for (int j = 3; j >= 0; j--) {
        b.ponDr(j);
    }
    
    ListaConcatena<int>::Iterador it = a.principio();
    
    while (it != a.final()) {
        std::cout << it.elem() << std::endl;
        it.avanza();
    }
    
    ListaConcatena<int>::Iterador itb = b.principio();
    
    while (itb != b.final()) {
        std::cout << itb.elem() << std::endl;
        itb.avanza();
    }
    
    std::cout << "Concatenando a con b" << std::endl;
    
    a.concatena(b);
    
    std::cout << "Eliminando b" << std::endl;
    
    b.~ListaConcatena();
    
    ListaConcatena<int>::Iterador itt = a.principio();
    
    while (itt != a.final()) {
        std::cout << itt.elem() << std::endl;
        itt.avanza();
    }
    
    return 0;
}
