#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(std::string value) : Chef(value) {
    std::cout << "Italian Chef " << name << " konstruktori" << std::endl;
}

std::string ItalianChef::getName()   {
    return name;
}
void ItalianChef::makePasta()   {
    std::cout << "Italian chef " << name << " made pasta!" << std::endl;
}
ItalianChef::~ItalianChef(){}
