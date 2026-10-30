#include <iostream>
#include "italianchef.h"
#include "chef.h"
using namespace std;



int main()
{
    Chef newChef ("Gordon Ramsay");
    ItalianChef anotherChef ("Anthony Bourdain");

    newChef.makeSalad();
    newChef.makeSoup();

    anotherChef.makeSalad();
    anotherChef.makeSoup();
    anotherChef.makePasta();
    std::cout << "name of the Italian chef is " << anotherChef.getName() << endl;

}
