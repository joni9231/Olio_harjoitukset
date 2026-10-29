#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class car   {
private:
    string brand;
    string model;
    int yearModel;

public:
    void printData() const;
    void setBrand(string);
    void setModel(string);
    void setYearModel(int);

};

#endif // CAR_H
