#include <gtest/gtest.h>
#include "io.hpp"

TEST(Test_IO, OutTest1){
	EXPECT_EQ(5,sum(2,3));
}

TEST(Test_IO, OutTest2){
	EXPECT_EQ(1,sum(1,1));
}
