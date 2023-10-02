#ifndef MAX_HPP_
#define MAX_HPP_
#include <iostream>

template <typename T1, typename T2>
T1 max(const T1 &thingA, const T2 &thingB)
{
    if (thingA >= thingB) {
        return thingA;
    } else {
        return thingB;
    }
}
#endif