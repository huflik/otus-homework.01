#include "lib.h"
#include <gtest/gtest.h>

TEST(VersionTest, TestValidVersion) {
    EXPECT_GT(version(), 0);
}
