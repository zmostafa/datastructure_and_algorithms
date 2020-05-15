#include <catch2/catch.hpp>
#include "../max_pairwise_product.hpp"


TEST_CASE("Testing Max pair Product")
{
  std::vector<int> nums = {1,2,3};
  REQUIRE(MaxPairwiseProduct(nums) == 6);
  std::vector<int> overflow = {100000,90000};
  REQUIRE(MaxPairwiseProduct(overflow) == 9000000000);
  std::vector<int> another = {4,5,6,10};
  REQUIRE(MaxPairwiseProduct(another) == 60);
  std::vector<int> last = {5,10,15,20};
  REQUIRE(MaxPairwiseProduct(last) == 300);
}
