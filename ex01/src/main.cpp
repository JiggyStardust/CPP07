#include "../inc/iter.hpp"

template <typename T>
void printElement(const T& element) {
    std::cout << element << std::endl;
}

// Function to modify elements (to demonstrate)
template <typename T>
void incrementElement(T& element) {
    ++element;
}

// Function to append "!" to strings
void appendExclaims(std::string& s) {
    s += "!!!";
}

int main() {
    // Test with int array
    int intArr[] = {1, 2, 3, 4, 5};
    size_t intLen = sizeof(intArr) / sizeof(intArr[0]);

    std::cout << "Original int array:" << std::endl;
    ::iter(intArr, intLen, printElement<int>);

	// Incrementing array elements

	::iter(intArr, intLen, incrementElement<int>);
    std::cout << "\nAfter incrementing array elements:" << std::endl;
    ::iter(intArr, intLen, printElement<int>);

    // Test with string array
    std::string strArr[] = {"Hello", "World", "C++", "Templates"};
    size_t strLen = sizeof(strArr) / sizeof(strArr[0]);

    std::cout << "\nOriginal string array:" << std::endl;
    ::iter(strArr, strLen, printElement<std::string>);

// calling appendExclaims
    ::iter(strArr, strLen, appendExclaims);
    std::cout << "\nAfter appendExclaims:" << std::endl;
    ::iter(strArr, strLen, printElement<std::string>);

    return 0;
}