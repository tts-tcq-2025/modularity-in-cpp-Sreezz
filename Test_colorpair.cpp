#include <iostream>
#include <assert.h>
#include "Test_colorpair.h"
#include "colorpair.h"

void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) 
{
    ColorPair pair = GetColorFromPairNumber(pairNumber);
    printf("Got pair %s\n", ToString(pair));
    assert(pair.major == expectedMajor);
    assert(pair.minor == expectedMinor);
}

void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) 
{
    int pairNumber = GetPairNumberFromColor(major, minor);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
