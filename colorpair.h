
#ifndef COLORPAIR_H
#define COLORPAIR_H

typedef enum 
{
    WHITE, RED, BLACK, YELLOW, VIOLET
} MajorColor;

typedef enum 
{
    BLUE, ORANGE, GREEN, BROWN, SLATE
} MinorColor;


typedef struct 
{
    MajorColor major;
    MinorColor minor;
} ColorPair;

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(MajorColor major, MinorColor minor);
const char* ToString(ColorPair pair);
void PrintColorManual();

#endif
