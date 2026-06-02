#include <iostream>
#include <string>

int main() {
    // 1. Integer Types (Whole numbers)
    int age = 20;                      // Standard integer (usually 4 bytes)
    short smallNum = 15;               // Smaller integer (usually 2 bytes)
    long long veryLargeNum = 9876543210LL; // Very large integer (usually 8 bytes)

    // 2. Floating-Point Types (Decimal numbers)
    float gpa = 3.8f;                  // Single-precision decimal (4 bytes, needs 'f' suffix)
    double pi = 3.14159265359;         // Double-precision decimal (8 bytes, standard for decimals)

    // 3. Character & String Types (Text)
    char grade = 'A';                  // Single character (1 byte, uses single quotes)
    std::string name = "Sam";          // Sequence of characters (uses double quotes)

    // 4. Boolean Type (True/False)
    bool isStudent = true;             // Holds either true (1) or false (0) (1 byte)


    // ---- Displaying the values and their memory sizes ---
    std::cout << "--- C++ Data Types & Sizes ---" << std::endl;
    
    std::cout << "int: " << age << " (" << sizeof(int) << " bytes)" << std::endl;
    std::cout << "long long: " << veryLargeNum << " (" << sizeof(long long) << " bytes)" << std::endl;
    std::cout << "float: " << gpa << " (" << sizeof(float) << " bytes)" << std::endl;
    std::cout << "double: " << pi << " (" << sizeof(double) << " bytes)" << std::endl;
    std::cout << "char: " << grade << " (" << sizeof(char) << " bytes)" << std::endl;
    std::cout << "string: " << name << " (" << sizeof(std::string) << " bytes basic structure)" << std::endl;
    std::cout << "bool: " << std::boolalpha << isStudent << " (" << sizeof(bool) << " byte)" << std::endl;

    return 0;
}