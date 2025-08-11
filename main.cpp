#include <iostream>
#include <assert.h>
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

int main() 
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    PrintColorManual();  // New feature

    return 0;
}
