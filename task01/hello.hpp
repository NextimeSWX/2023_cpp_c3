#ifndef HELLO_HPP_
#define HELLO_HPP_
#include "Language.hpp"
#include <string>

void hello(std::string str, Language choice);
void hello(Language choice);
void hello(std::string str);
void hello();

#endif