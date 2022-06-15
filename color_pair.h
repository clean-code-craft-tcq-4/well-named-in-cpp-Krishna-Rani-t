#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H
#include <string>
#include<iostream>
#include<assert.h>
namespace TelCoColorCoder
{
    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):majorColor(major), minorColor(minor){}
            MajorColor getMajor() 
            {
                return majorColor;
            } 
            MinorColor getMinor() 
            {
               return minorColor;
            }  
            std::string ToString() 
            {
               std::string colorPairStr = MajorColorNames[majorColor]; 
               colorPairStr += " ";
               colorPairStr += MinorColorNames[minorColor];
               return colorPairStr;
            }
       };
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    
    int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    
    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
       ColorPair GetColorFromPairNumber(int pairNumber);
       void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor);
       void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber);
}
#endif
