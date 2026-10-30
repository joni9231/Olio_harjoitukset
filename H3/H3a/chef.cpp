#include "chef.h"
#include <iostream>


Chef::Chef(std::string value) {
    name = value;
    std::cout << "chef " << name << " konstruktori" << std::endl;
}
void Chef::makeSalad()  {
    std::cout << "Chef " << name << " made salad!" << std::endl;
}
void Chef::makeSoup()  {
    std::cout << "Chef " << name << " made soup!" << std::endl;
}
Chef::~Chef(){
    std::cout << name << " destruktori" << std::endl;
}
