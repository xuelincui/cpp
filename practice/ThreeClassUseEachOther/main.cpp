#include <iostream>
#include "include/class_foo.hpp"
#include "include/class_bar.hpp"
#include "include/class_top.hpp"

int main()
{
    bar b;
    top t(b);
    t.top_print(102); // foo calls bar to print

    return 0;
}


