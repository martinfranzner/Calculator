//
//  Operacao.cpp
//  Calculadora
//
//  Created by Martin Franzner on 28/02/18.
//  Copyright © 2018 Martin Franzner. All rights reserved.
//

#include "Operacao.hpp"
Operacao::Operacao{
    
}
float Operacao::adicao(float num){
    float add=0;
    cout<<"Digite o numero que queres adicionar"<<endl;
    cin>>add;
    num+= add;
    return num;
}
float Operacao::subtracao(float num){
    float sub=0;
    cout<<"Digite o numero que queres subtrair"<<endl;
    cin>>sub;
    num-= sub;
    return num;
}
float Operacao::multiplicacao(float num){
    
}
float Operacao::divisao(float num){
    
}

