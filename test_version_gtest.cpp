#include "lib.h"
#include "version.h"
#include <gtest/gtest.h>

TEST(VersionTest, TestValidVersion) {
    EXPECT_GT(version(), 0);
}
