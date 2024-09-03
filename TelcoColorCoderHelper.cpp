#include "TelcoColorCoderHelper.h"
#include <iomanip>
#include "ColorPair.h"
#include <iostream>

namespace TelCoColorCoder
{
    TelCoColorCoder::ColorPair TelcoColorCoderHelper::GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        TelCoColorCoder::MajorColor majorColor = (TelCoColorCoder::MajorColor)(zeroBasedPairNumber / TelCoColorCoder::numberOfMinorColors);
        TelCoColorCoder::MinorColor minorColor = (TelCoColorCoder::MinorColor)(zeroBasedPairNumber % TelCoColorCoder::numberOfMinorColors);
        return TelCoColorCoder::ColorPair(majorColor, minorColor);
    }

    int TelcoColorCoderHelper::GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) {
        return major * TelCoColorCoder::numberOfMinorColors + minor + 1;
    }

    void TelcoColorCoderHelper::PrintManual()
    {
        for (int i = 1; i <= 25; i++) {
            TelCoColorCoder::ColorPair colorPair = GetColorFromPairNumber(i);
            std::cout << std::setw(15) << colorPair.ToString() << " " << i << std::endl;
        }
    }
}