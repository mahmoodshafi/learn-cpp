#include <iostream>
#include <string>

int main() {
    std::string s1 = "Hello";
    std::string s2 = " World";

    // Concatenation
    std::string s3 = s1 + s2;
    std::cout << "Concatenation: " << s3 << std::endl; // Output: Hello World

    // Length
    std::cout << "Length of s3: " << s3.length() << std::endl; // Output: 11

    // Substring
    std::string sub = s3.substr(6, 5);
    std::cout << "Substring: " << sub << std::endl; // Output: World

    // Finding
    size_t pos = s3.find("World");
    if (pos != std::string::npos) {
        std::cout << "'World' found at position: " << pos << std::endl; // Output: 6
    }

    // Replacement
    s3.replace(0, 5, "Hi");
    std::cout << "After replacement: " << s3 << std::endl; // Output: Hi World

    return 0;
}