#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "base.hpp"
#include "op.hpp"
#include "Mult.hpp"
#include "Div.hpp"
#include "Pow.hpp"


TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}


TEST(OpTest, MultEvaluateNonZero) {
    Op* two = new Op(2);
    Op* four = new Op(4);
    Mult* test = new Mult(two, four);
    EXPECT_EQ(test->evaluate(), 8);
}
/*
TEST(OpTest, MultEvaluateZero) {
    Op* op1 = new Op(0);
    Op* op2 = new Op(9);
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), 0);
}
TEST(OpTest, MultEvaluateSingleNeg) {
    Op* op1 = new Op(-2);
    Op* op2 = new Op(4);
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), -8);
}
TEST(OpTest, MultEvaluateDoubleNeg) {
    Op* op1 = new Op(-2);
    Op* op2 = new Op(-4);
    Mult* test = new Mult(op1, op2);
    EXPECT_EQ(test->evaluate(), 8);
}
*/
/*
TEST(OpTest, DivEvaluatePos) {
    Op* op1 = new Op(8);
    Op* op2 = new Op(2);
    Div* test = new Div(op1, op2);
    EXPECT_EQ(test->evaluate(), 4);
}
TEST(OpTest, DivEvaluatePos) {
    Mult* test = new Mult(8, 2);
    EXPECT_EQ(test->stringify(), "8.000000 * 2.000000 = 16.000000");
}
TEST(OpTest, DivEvaluateZero) {
    Op* op1 = new Op(0);
    Op* op2 = new Op(2);
    Div* test = new Div(op1, op2);
    EXPECT_EQ(test->evaluate(), 0);
}
TEST(OpTest, DivEvaluateSingleNeg) {
    Op* op1 = new Op(-2);
    Op* op2 = new Op(4);
    Div* test = new Div(op1, op2);
    EXPECT_EQ(test->evaluate(), -0.5);
}
TEST(OpTest, DivEvaluateDoubleNeg) {
    Op* op1 = new Op(-2);
    Op* op2 = new Op(-4);
    Div* test = new Div(op1, op2);
    EXPECT_EQ(test->evaluate(), 0.5);
}
*/
/*
TEST(OpTest, PowEvaluateZeroEx) {
    Op* op1 = new Op(4);
    Op* op2 = new Op(0);
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 1);
}
TEST(OpTest, PowEvaluateZeroBaseAndZeroEx) {
    Op* op1 = new Op(0);
    Op* op2 = new Op(0);
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 1);
}
TEST(OpTest, PowEvaluateZeroBase) {
    Op* op1 = new Op(0);
    Op* op2 = new Op(4);
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 0);
}
TEST(OpTest, PowEvaluateNegPow) {
    Op* op1 = new Op(4);
    Op* op2 = new Op(-1);
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 0.25);
}
TEST(OpTest, PowEvaluatePosBaseAndEx) {
    Op* op1 = new Op(4);
    Op* op2 = new Op(2);
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 16);
}
TEST(OpTest, PowEvaluateNegBaseOddEx) {
    Op* op1 = new Op(-2);
    Op* op2 = new Op(3);
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), -8);
}
TEST(OpTest, PowEvaluateNegBaseEvenEx) {
    Op* op1 = new Op(-2);
    Op* op2 = new Op(4);
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->evaluate(), 16);
}
*/
#endif //__OP_TEST_HPP__
