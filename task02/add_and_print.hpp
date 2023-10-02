#ifndef ADD_AND_PRINT_HPP_
#define ADD_AND_PRINT_HPP_
#include <iostream>


template<typename T1, typename T2>
auto add_and_print(const T1 &thingA, const T2 &thingB)
{
	std::cout << thingA + thingB << std::endl;

    return (thingA + thingB);
}

#endif