#include <catch2/catch.hpp>
#include "../max_pairwise_product.hpp"


TEST_CASE("Testing Max pair Product")
{
  REQUIRE(MaxPairwiseProduct({1,2,3}) == 6);
  REQUIRE(MaxPairwiseProduct({100000,90000}) == 9000000000);
  REQUIRE(MaxPairwiseProduct({4,5,6,10}) == 60);
  REQUIRE(MaxPairwiseProduct({5,10,15,20}) == 300);
}
