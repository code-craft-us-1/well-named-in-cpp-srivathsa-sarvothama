#include "TelcoColorCoderHelper.h"
#include "TelcoColorCoderTest.h"

using namespace TelCoColorCoder;

int main() {
    TelcoColorCoderTest::testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    TelcoColorCoderTest::testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    TelcoColorCoderTest::testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    TelcoColorCoderTest::testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    TelcoColorCoderHelper::PrintManual();

    return 0;
}
