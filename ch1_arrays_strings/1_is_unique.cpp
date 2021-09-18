/* 
1.1 Is Unique

Implement an algorithm to determine if a string has all unique characters. 
what if you cannot use additional data structures?

*/

// ASSUME: ASCII characters only
// ASSUME: case
#include <iostream>
#include <string>
#include <set>

bool isUnique(std::string str);

int main() {
    std::string str1 = "lalalala";
    std::string str2 = "asdfghjkl";

    std::cout << isUnique(str1) << std::endl << isUnique(str2) << std::endl;

}

bool isUnique(std::string str) {
    int len = str.length();
    std::set<char> set1;
    for (int i = 0; i < len; i++) {
        auto set_pair = set1.insert(str[i]);
        if (!set_pair.second) return false;
    }
    return true;
}