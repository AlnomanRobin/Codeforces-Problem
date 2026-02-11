#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string program;
    std::getline(std::cin, program);

    const bool producesOutput = std::any_of(
        program.begin(),
        program.end(),
        [](char ch) {
            return ch == 'H' || ch == 'Q' || ch == '9';
        }
    );

    std::cout << (producesOutput ? "YES" : "NO");
    return 0;
}
