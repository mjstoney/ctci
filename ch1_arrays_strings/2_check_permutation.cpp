/*

2. Check Permutation

Given two strings, write a method to decidde if one is a permutation of the other.

*/

#include <iostream>
#include <string>
#include <bitset>

bool isPermutation(std::string str1, std::string str2);

int main() {
    std::string str1 = "lalala", str2 = "alllas";
    std::cout << isPermutation(str1, str2) << "\n";


}

bool isPermutation(std::string str1, std::string str2) {

    int len1 = str1.length();
    std::bitset<128> bs; // ASSUME ASCII chars -> total 128 possible
    if(len1 != str2.length()) {
        return false;
    }

    for(int i = 0; i < len1; i++) {
        bs.flip((int)str1[i]);
        bs.flip((int)str2[i]);
    }
    if(bs.count() == 0) {
        return true;
    }
    else return false;



}