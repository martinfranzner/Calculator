//
//  Operacao.hpp
//  Calculadora
//
//  Created by Martin Franzner on 28/02/18.
//  Copyright © 2018 Martin Franzner. All rights reserved.
//

#ifndef Operacao_hpp
#define Operacao_hpp
#include <iostream>
#include <stdio.h>
using namespace std;
class Operacao{
    
    
public:
    Operacao();
    float adicao(float num);
    float subtracao(float num);
    float multiplicacao(float num);
    float divisao(float num);
};
#endif /* Operacao_hpp */
