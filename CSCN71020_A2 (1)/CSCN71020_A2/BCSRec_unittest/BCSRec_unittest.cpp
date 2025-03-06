#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/main.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests {
    TEST_CLASS(RectangleTests) {
public:

    // Test for getPerimeter function
    TEST_METHOD(Test_GetPerimeter) {
        int length = 7, width = 12;
        int expectedPerimeter = 2 * (length + width);

        int actualPerimeter = getPerimeter(&length, &width);
        Assert::AreEqual(expectedPerimeter, actualPerimeter);
    }

    // Test for getArea function
    TEST_METHOD(Test_GetArea) {
        int length = 6, width = 9;
        int expectedArea = length * width;

        int actualArea = getArea(&length, &width);
        Assert::AreEqual(expectedArea, actualArea);
    }

    // Test for setLength function with valid input
    TEST_METHOD(Test_SetLength_ValidInput) {
        int length = 0;
        setLength(40, &length);
        Assert::AreEqual(40, length);
    }

    // Test for setLength function (edge case - minimum value)
    TEST_METHOD(Test_SetLength_MinValue) {
        int length = 0;
        setLength(2, &length);
        Assert::AreEqual(2, length);
    }

    // Test for setLength function (edge case - maximum value)
    TEST_METHOD(Test_SetLength_MaxValue) {
        int length = 0;
        setLength(95, &length);
        Assert::AreEqual(95, length);
    }

    // Test for setWidth function with valid input
    TEST_METHOD(Test_SetWidth_ValidInput) {
        int width = 0;
        setWidth(45, &width);
        Assert::AreEqual(45, width);
    }

    // Test for setWidth function (edge case - minimum value)
    TEST_METHOD(Test_SetWidth_MinValue) {
        int width = 0;
        setWidth(3, &width);
        Assert::AreEqual(3, width);
    }

    // Test for setWidth function (edge case - maximum value)
    TEST_METHOD(Test_SetWidth_MaxValue) {
        int width = 0;
        setWidth(90, &width);
        Assert::AreEqual(90, width);
    }
    };
}
