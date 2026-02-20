#include <iostream>
#include <string>

std::string reverse_string(const std::string &s) {
    std::string result = s;
    for (int i = 0, j = result.length() - 1; i < j; ++i, --j) {
        std::swap(result[i], result[j]);
    }
    return result;
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