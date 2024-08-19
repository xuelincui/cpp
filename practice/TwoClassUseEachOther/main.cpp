#include <iostream>

#include "include/class_foo.hpp"
#include "include/class_bar.hpp"

int main()
{
    class_foo::foo f;

    f.foo_print_from_bar();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
