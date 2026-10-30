#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>


class ItalianChef : public Chef   {
public:
    ItalianChef(std::string);
    std::string getName();
    void makePasta();
    ~ItalianChef();
};

#endif // ITALIANCHEF_H
