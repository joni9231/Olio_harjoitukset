#ifndef CAR_H
#define CAR_H
#include <string>


class car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    void printData();
    car(std::string, std::string, int);
};


#endif // CAR_H
