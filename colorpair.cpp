
#include "colorpair.h"
#include <stdio.h>
#include <string.h>

const char* MajorColorNames[] = 
{
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = 
{
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

ColorPair GetColorFromPairNumber(int pairNumber) 
{
    ColorPair pair;
    int zeroBasedPairNumber = pairNumber - 1;
    pair.major = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    pair.minor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return pair;
}

int GetPairNumberFromColor(MajorColor major, MinorColor minor) 
{
    return major * numberOfMinorColors + minor + 1;
}

const char* ToString(ColorPair pair) 
{
    static char colorPairStr[32];
    snprintf(colorPairStr, sizeof(colorPairStr), "%s %s",
             MajorColorNames[pair.major], MinorColorNames[pair.minor]);
    return colorPairStr;
}

void PrintColorManual() 
{
    printf("Color Code Reference Manual:\n");
    printf("-----------------------------\n");
    for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) 
    {
        ColorPair pair = GetColorFromPairNumber(i);
        printf("%2d - %s\n", i, ToString(pair));
    }
}
