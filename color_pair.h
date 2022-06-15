using namespace std;

#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H
namespace TelCoColorCoder
{
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

    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):majorColor(major), minorColor(minor);
            
            MajorColor getMajor();
            MinorColor getMinor();
               
            std::string ToString();
        
            ColorPair GetColorFromPairNumber(int pairNumber) ;
            int GetPairNumberFromColor(MajorColor major, MinorColor minor) ;
       };
}
#endif
