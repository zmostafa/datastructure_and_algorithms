#include <iostream>
#include "max_pairwise_product.hpp"

int64_t MaxPairwiseProduct(std::vector<int>& numbers) {

    std::sort(numbers.begin(), numbers.end());

    return static_cast<int64_t> (numbers.end()[-1]) *  static_cast<int64_t> (numbers.end()[-2]);
}

int main() {
    std::vector<int>::size_type n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (std::vector<int>::size_type i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
