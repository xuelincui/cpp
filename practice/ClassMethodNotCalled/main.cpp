#include <iostream>
#include "include/classes.hpp"
#include "map"

int main()
{
    Cb cb(1);  // instanciate Cb

    std::map<int, Cb> m;
    m.emplace(1, std::move(cb));

    Cb& ccb = m.at(1);
    int i = ccb.getCa();

    std::cout << "va = " << i << std::endl;
}