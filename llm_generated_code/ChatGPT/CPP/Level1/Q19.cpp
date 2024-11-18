#include <iostream>
#include <algorithm>
#include <string>

bool areAnagrams(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) return false;
    std::string sorted_str1 = str1, sorted_str2 = str2;
    std::sort(sorted_str1.begin(), sorted_str1.end());
    std::sort(sorted_str2.begin(), sorted_str2.end());
    return sorted_str1 == sorted_str2;
}

int main() {
    std::string str1 = "listen";
    std::string str2 = "silent";
    if (areAnagrams(str1, str2)) {
        std::cout << "The strings are anagrams." << std::endl;
    } else {
        std::cout << "The strings are not anagrams." << std::endl;
    }
    return 0;
}
