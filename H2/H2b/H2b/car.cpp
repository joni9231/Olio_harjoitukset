#include "car.h"
#include <iostream>


void car::printData()   {
    std::cout << brand << "|" << model << "|" << yearModel << std::endl;
}

car::car(std::string newBrand, std::string newModel, int newYearModel)  {
    brand = newBrand;
    model = newModel;
    yearModel = newYearModel;
}
