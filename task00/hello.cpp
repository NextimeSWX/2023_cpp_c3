#include "hello.hpp"
#include <iostream>
#include <string>

void hello(std::string str)
{
    std::cout << "Hello " << str << " !\n";
}

void hello()
{
    std::cout << "Hello strangers !\n";
}