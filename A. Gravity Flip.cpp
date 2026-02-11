#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int columnCount = 0;
    std::cin >> columnCount;

    std::vector<int> heights(columnCount);
    for (auto& height : heights) {
        std::cin >> height;
    }

    std::sort(heights.begin(), heights.end());

    for (const auto& height : heights) {
        std::cout << height << ' ';
    }

    return 0;
}
