#include <iostream>
#include "max.hpp"
#include "min.hpp"

int main(void)
{
    std::cout << max(1, 2) << std::endl;
    std::cout << min(1, 2) << std::endl;
    std::cout << max(1.2545, 21747.5) << std::endl;
    std::cout << min(1.5485, 2) << std::endl;
    return 0;
}