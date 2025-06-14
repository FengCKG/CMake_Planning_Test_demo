#include <iostream>
#include "process.h" 

int main() {
    std::cout << "Planning start" << std::endl;

    Process pro;
    pro.planProcess();

    std::cout << "Planning end" << std::endl;
    return 0;
}
