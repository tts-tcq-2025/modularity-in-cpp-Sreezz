#include <iostream>
#include <assert.h>
#include "Test_colorpair.h"

int main() 
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    PrintColorManual();  // New feature

    return 0;
}
