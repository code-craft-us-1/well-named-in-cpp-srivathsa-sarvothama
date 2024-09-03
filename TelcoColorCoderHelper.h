#pragma once
#include "TelcoCommon.h"
#include "ColorPair.h"

namespace TelCoColorCoder
{
    class TelcoColorCoderHelper
    {
    public:
        static TelCoColorCoder::ColorPair GetColorFromPairNumber(int pairNumber);
        static int GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor);
        static void PrintManual();
    };
}
