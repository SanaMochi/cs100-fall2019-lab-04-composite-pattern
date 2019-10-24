#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"


TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
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
