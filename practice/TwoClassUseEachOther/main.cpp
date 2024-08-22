#include <iostream>
#include "include/class_foo.hpp"
#include "include/class_bar.hpp"

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

class_foo::foo get_foo()
{
    class_bar::class_bar_2::bar b;

    class_foo::foo f(3, b, false);

    return f;
}

int main()
{

   class_foo::foo f = get_foo();

    f.foo_print_from_bar(102); // foo calls bar to print

    std::cout << "OS type: " << ToString(OS_type::Apple) << std::endl;
    return 0;
}


