#include "car.h"

void car::setBrand(string newBrand) {
    brand = newBrand;
}
void car::setModel(string newModel) {
    model = newModel;
}
void car::setYearModel(int yrModel) {
    yearModel = yrModel;
}
void car::printData() const   {
    cout << brand << " " << model << " " << yearModel << endl;
}
