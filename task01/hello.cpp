#include "hello.hpp"
#include "Language.hpp"
#include <iostream>
#include <string>


void hello(std::string str, Language choice)
{
    if (choice == Language::Spanish) {
        std::cout << "¡Hola " << str << "!\n";
    }
    else if (choice == Language::French) {
        std::cout << "Bonjour " << str << "!\n";
    }
    else if (choice == Language::English) {
        std::cout << "Hello " << str << "!\n";
    }
    else {
        std::cout << "La langue choisie n'est pas disponible\n";
    }
}

void hello(Language choice)
{   
    if (choice == Language::Spanish) {
        std::cout << "¡Hola extranjero! " << "\n";
    }
    else if (choice == Language::French) {
        std::cout << "Bonjour inconnu ! " << "\n";
    }
    else if (choice == Language::English) {
        std::cout << "Hello stranger! " << "\n";
    }
}

void hello(std::string str)
{
    std::cout << "Hello " << str << "!\n";
}

void hello()
{
    std::cout << "Hello strangers !\n";
}
