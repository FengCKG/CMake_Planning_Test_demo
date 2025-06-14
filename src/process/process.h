#pragma once
#include "pnc_map.h"

class Process {
public:
    Process();
    ~Process();

    void planProcess();

private:
    pnc_map my_map;
};
