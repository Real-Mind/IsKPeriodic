#include <iostream>
#include <string>

bool IsKPeriodic(const std::string& str, int k) {
    int n = str.length();
    if (k <= 0 || n < k || n % k != 0) {
        return false;
    }

    int repeatCount = n / k;

    for (int i = 1; i < repeatCount; ++i) {
        if (str.substr(0, k) != str.substr(i * k, k)) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string str = "abcabcabcabc";
    int k = 3;

    if (IsKPeriodic(str, k)) {
        std::cout << "Строка является " << k << "-периодической." << std::endl;
    }
    else {
        std::cout << "Строка не является " << k << "-периодической." << std::endl;
    }

    return 0;
}