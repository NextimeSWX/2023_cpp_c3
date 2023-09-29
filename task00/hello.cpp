#include "hello.hpp"
#include <iostream>
#include <string>

void hello(std::string std)
{
    std::cout << "Hello" << std << "!\n";
}

void hello()
{
    std::cout << "Hello strangers !";
}