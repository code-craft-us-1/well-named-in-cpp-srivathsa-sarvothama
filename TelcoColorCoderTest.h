#pragma once
#include "TelcoCommon.h"

namespace TelCoColorCoder
{
    class TelcoColorCoderTest
    {
    public:
        static void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor);
        static void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber);
    };
}