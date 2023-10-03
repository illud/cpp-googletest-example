#include "operation_test.h"
#include <gtest/gtest.h>
#include "operations.h"


TEST(sum_operation_test, test_sum_func) {
	Operations op;
	EXPECT_EQ(8, op.sum(5, 3));
}