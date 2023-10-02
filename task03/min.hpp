#ifndef MIN_HPP_
#define MIN_HPP_
#include <iostream>

template <typename T1, typename T2>
T1 min(const T1 &thingA, const T2 &thingB)
{
    if (thingA < thingB) {
        return thingA;
    } else {
        return thingB;
    }
}
#endif