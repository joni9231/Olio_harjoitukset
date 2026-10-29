#ifndef RECTANGLE_H
#define RECTANGLE_H

class rectangle {

private:
    double width;
    double height;

public:
    int getArea();
    int getCircum();
    void setWidth(double);
    void setHeight(double);

};

#endif // RECTANGLE_H
