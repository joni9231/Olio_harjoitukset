#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<car> carList;
    carList.emplace_back("saab", "900", 1992);
    carList.emplace_back("volvo", "s60", 2007);
    carList.emplace_back("toyota", "camry", 2000);

    carList[1].printData();
    cout << endl;

    for (int i = 0; i < carList.size(); i++)   {
        carList[i].printData();
        cout << endl;
    }

}
