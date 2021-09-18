/* 

1.3 URLify

Write a method to replace all spaces in a string with '%20'. You may assume that the string has 
sufficient space at the end to hold the additional charcters, and that you are given the "true" 
length of the string. 
(Note: if implementing in Java, please use a character array so that you can perform this operation in place.)

*/

#include <iostream>


std::string toURL(std::string str);

int main() {
    std::string str1 = "The quick brown fox jumped over the lazy dog.";
    std::cout << toURL(str1) << std::endl;
}

std::string toURL(std::string str) {
    int len = str.length();
    
    for (int i = 0; i < len; i++) {

    }
}