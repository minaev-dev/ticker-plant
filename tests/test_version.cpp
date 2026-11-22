#include <gtest/gtest.h>
#include "ticker_plant/version.h"

TEST(VersionTest, R1_ReturnsNonEmptyVersion) {
  EXPECT_FALSE(ticker_plant::version().empty());
}