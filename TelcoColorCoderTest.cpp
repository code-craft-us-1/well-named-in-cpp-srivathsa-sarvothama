#include <iostream>
#include "TelcoCommon.h"
#include "ColorPair.h"
#include "TelcoColorCoderTest.h"
#include "TelcoColorCoderHelper.h"
#include <assert.h>

namespace TelCoColorCoder
{
    void TelcoColorCoderTest::testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor) {
        TelCoColorCoder::ColorPair colorPair = TelcoColorCoderHelper::GetColorFromPairNumber(pairNumber);
        std::cout << "Got pair " << colorPair.ToString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }

    void TelcoColorCoderTest::testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber) {
        int pairNumber = TelcoColorCoderHelper::GetPairNumberFromColor(major, minor);
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }
}
