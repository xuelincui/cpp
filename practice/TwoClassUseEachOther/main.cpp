#include <iostream>

#include "include/class_foo.hpp"
#include "include/class_bar.hpp"

#include <iostream>
#include "include/class_foo.hpp"
#include "include/class_bar.hpp"

#define X(a, b) a,
#define X(a, b) b,

enum OS_type { Linux, Apple, Windows };


inline const char* ToString(OS_type v)
{
    switch (v)
    {
    case Linux:   return "Linux";
    case Apple:   return "Apple";
    case Windows: return "Windows";
    default:      return "[Unknown OS_type]";
    }
}
int main()
{
    class_bar::class_bar_2::bar b;

    class_foo::foo f(3, b, false);

    f.foo_print_from_bar(); // foo calls bar to print

    std::cout << "OS type: " << ToString(OS_type::Apple) << std::endl;
    return 0;
}


