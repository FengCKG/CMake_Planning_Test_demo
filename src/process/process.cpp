#include <iostream>
#include "process.h"
using std::cout, std::endl;

Process::Process() {}

Process::~Process() {}

void Process::planProcess() {
    cout << "This is planning process" << endl;
    my_map.mapInfo();
    cout << "Planning Success!" << endl;
}
