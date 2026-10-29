#include "rectangle.h"

void rectangle::setHeight(double newHeight) {
    height = newHeight;
}

void rectangle::setWidth(double newWidth){
    width = newWidth;
}

int rectangle::getArea()    {
    double area = width * height;
    return area;
}

int rectangle::getCircum()  {
    int circum = 2 * (width + height);
    return circum;
}
