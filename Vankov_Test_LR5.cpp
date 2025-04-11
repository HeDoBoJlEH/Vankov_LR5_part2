#include "Vankov_LR5.h"
#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"

using namespace cute;

void testCanStoi_Empty()
{
    string input = "";
    bool expected = false;

    bool actual = CanStoi(input);

    ASSERT_EQUAL(expected, actual);
}

void testCanStoi_Letter()
{
    string input = "a";
    bool expected = false;

    bool actual = CanStoi(input);

    ASSERT_EQUAL(expected, actual);
}

void testCanStoi_Mixed()
{
    string input = "5a";
    bool expected = false;

    bool actual = CanStoi(input);

    ASSERT_EQUAL(expected, actual);
}

void testCanStoi_Digit()
{
    string input = "52";
    bool expected = true;

    bool actual = CanStoi(input);

    ASSERT_EQUAL(expected, actual);
}

void testExecutePlus()
{
    a = -7;
    b = 19;
    int expected = 12;

    ExecutePlus();

    ASSERT_EQUAL(expected, res);
}

void testExecuteMinus()
{
    a = 14;
    b = 3;
    int expected = 11;

    ExecuteMinus();

    ASSERT_EQUAL(expected, res);
}

int main()
{
    suite s;

    s.push_back(testCanStoi_Empty);
    s.push_back(testCanStoi_Letter);
    s.push_back(testCanStoi_Mixed);
    s.push_back(testCanStoi_Digit);
    s.push_back(testExecutePlus);
    s.push_back(testExecuteMinus);

    ide_listener<> listener;
    makeRunner(listener)(s, "");
}