#include <iostream>
#include <vector>
#include <algorithm>

int64_t MaxPairwiseProduct(std::vector<int>& numbers) {

    std::sort(numbers.begin(), numbers.end());

    return (int64_t) numbers.end()[-1] *  (int64_t) numbers.end()[-2];
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
