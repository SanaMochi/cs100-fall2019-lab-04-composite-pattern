#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "base.hpp"
#include "op.hpp"
#include "Mult.hpp"
#include "Div.hpp"
#include "Pow.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "rand.hpp"


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

TEST(OpTest, MultEvaluateNonZeroString) {
    Op* two = new Op(2);
    Op* four = new Op(4);
    Mult* test = new Mult(two, four);
    EXPECT_EQ(test->stringify(), "2.000000 * 4.000000");
}

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


TEST(OpTest, DivEvaluatePos) {
    Op* op1 = new Op(8);
    Op* op2 = new Op(2);
    Div* test = new Div(op1, op2);
    EXPECT_EQ(test->evaluate(), 4);
}
TEST(OpTest, DivEvaluatePosString) {
    Op* op1 = new Op(8);
    Op* op2 = new Op(2);
    Div* test = new Div(op1, op2);
    EXPECT_EQ(test->stringify(), "8.000000 / 2.000000");
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

TEST(OpTest, PowEvaluateZeroBaseAndZeroExString) {
    Op* op1 = new Op(0);
    Op* op2 = new Op(0);
    Pow* test = new Pow(op1, op2);
    EXPECT_EQ(test->stringify(), "0.000000 ** 0.000000");
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
TEST(OpTest, AddTestEvaluate) {
	Op* seven = new Op(7);
	Op* two = new Op(2);
    Add* test = new Add(seven, two);
    EXPECT_EQ(test->evaluate() , 9);
}


TEST(OpTest, AddTestStringify) {
	Op* seven = new Op(7);
	Op* two = new Op(2);
    Add* test = new Add(seven, two);
    EXPECT_EQ(test->stringify() , "7.000000 + 2.000000");
}

TEST(OpTest, SubTestEvaluate) {
	Op* seven = new Op(7);
	Op* two = new Op(2);
    Sub* test = new Sub(seven, two);
    EXPECT_EQ(test->evaluate() , 5);
}

TEST(OpTest, SubTestStringify) {
	Op* seven = new Op(7);
	Op* two = new Op(2);
    Sub* test = new Sub(seven, two);
    EXPECT_EQ(test->stringify() , "7.000000 - 2.000000");
}

#endif //__OP_TEST_HPP__
