#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>
using namespace std;


int main()
{
    car car1;
    car1.setBrand("saab");
    car1.setModel("9-3");
    car1.setYearModel(2006);
    car1.printData();

    rectangle *rectangle1 = new rectangle;
    rectangle1->setHeight(6);
    rectangle1->setWidth(7);
    cout << "area " << rectangle1->getArea() << endl;
    cout << "circum " << rectangle1->getCircum() << endl;
    delete rectangle1;
    rectangle1 = nullptr;

    unique_ptr<student> p = make_unique<student>();
    p->setName("jorma");
    p->setStudentNumber(1337);
    p->setAverage(6.7);
    cout << "name: " << p->getName() << "| student number: " << p->getStudentNumber() << "| average: " << p->getAverage() << endl;

}
