#include <iostream>
#include <string>
#include "hello.hpp"
#include "Language.hpp"

int main()
{
    hello(Language::Spanish);
    hello("toto");
    hello("toto", Language::French);
}