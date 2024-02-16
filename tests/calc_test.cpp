#include <iostream>
#include <gtest/gtest.h>
#include <cmath>
using namespace std;
#include "../src/functions.h"


// Test squareRoot function
TEST(SquareRootTest, PositiveInput) {
    EXPECT_DOUBLE_EQ(squareRoot(3.0), 2.0);
    EXPECT_DOUBLE_EQ(squareRoot(9.0), 3.0);
}

TEST(SquareRootTest, NegativeInput) {
    EXPECT_DOUBLE_EQ(squareRoot(-1.0), 0.0);
}

// Test factorial function
TEST(FactorialTest, NonNegativeInput) {
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(5), 120);
}

TEST(FactorialTest, NegativeInput) {
    EXPECT_EQ(factorial(-1), 0); 
}

// Test naturalLogarithm function
TEST(NaturalLogarithmTest, PositiveInput) {
    EXPECT_DOUBLE_EQ(naturalLogarithm(1.0), 0.0);
    EXPECT_DOUBLE_EQ(naturalLogarithm(2.0), log(2.0));
}

TEST(NaturalLogarithmTest, NonPositiveInput) {
    EXPECT_DOUBLE_EQ(naturalLogarithm(0.0), 0.0); 
    EXPECT_DOUBLE_EQ(naturalLogarithm(-1.0), 0.0);
}

// Test powerFunction
TEST(PowerFunctionTest, PositiveExponent) {
    EXPECT_DOUBLE_EQ(powerFunction(2.0, 3.0), 8.0);
    EXPECT_DOUBLE_EQ(powerFunction(5.0, 2.0), 25.0);
}

TEST(PowerFunctionTest, NegativeExponent) {
    EXPECT_DOUBLE_EQ(powerFunction(2.0, -1.0), 0.5); 
}
