#include <iostream>
#include <iomanip>

void calcSum(int a, int b)  {
    int sum = a + b;
    std::cout << "sum: " << sum << '\n';
    }

int retSum(int a, int b)  {
    int sum = a + b;
    return sum;
}


void calcDiv(int a, int b)  {
    if (b == 0) {
        std::cout << "error, divider cant be 0\n";
        return;
    }
    float div = (float)a / (float)b;
    std::cout << std::fixed << std::setprecision(2) << "div: " << div << '\n';
}

float retDiv(int a, int b)  {
    if (b == 0) {
        throw std::runtime_error("jakaja ei saa olla nolla!");
    }
    float div = (float)a / (float)b;
    return div;
}



int main()  {

    float result;
    int a;
    int b;

    std::cout << "Anna kaksi lukua\n";
    std::cin >> a;
    std::cin >> b;

    int sum = retSum(a, b);
    std::cout << "sum: " << sum << '\n';


    try {
        result = retDiv(a, b);
        std::cout << std::fixed << std::setprecision(2) << a << "/" << b << " = " << result << std::endl;
    }
    catch (std::runtime_error& e)   {
        std::cout<<"Error: " << e.what()<< std::endl;
    }

    return 0;
}
