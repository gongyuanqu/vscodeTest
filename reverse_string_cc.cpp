#include <iostream>
#include <string>
#include <algorithm>

std::string reverse_string(const std::string &s) {
    return std::string(s.rbegin(), s.rend());
}

int main(int argc, char **argv) {
    std::string input;
    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            if (i > 1) input += " ";
            input += argv[i];
        }
    } else {
        std::getline(std::cin, input);
    }
    std::cout << reverse_string(input) << '\n';
    return 0;
}

