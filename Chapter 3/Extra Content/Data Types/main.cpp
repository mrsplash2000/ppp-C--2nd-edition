/*
Here we take a look at data types, Their size in bytes and the typical range they possess.
If you notice in the code, I've used both std::numeric_limits<DATA TYPE>::min() and
std::numeric_limits<DATA TYPE>::lowest() to show the lowest possible value for each.
The reason is because I wanted to demonstrate the different outputs you get when you're
dealing with float or double.
Here's the difference between both:
std::numeric_limits<float>::min() --> returns a very small positive number close to zero
std::numeric_limits<float>::lowest() -->  returns the lowest negative value
*/

#include <iostream>
#include <limits> //For using std::numeric_limits<DATA TYPE>

int main() {
    std::cout << "Data Type Demonstration\n";
    std::cout << "========================\n";

    //char
    std::cout << "char:\n";
    std::cout << "Size: " << sizeof(char) << " byte(s)\n";
    std::cout << "Range: [" << int(std::numeric_limits<char>::lowest()) << "," << int(std::numeric_limits<char>::max()) << "]\n";
    std::cout << "Range: [" << int(std::numeric_limits<char>::min()) << "," << int(std::numeric_limits<char>::max()) << "]\n";
    std::cout << "-----------------------\n";

    //unsigned char
    std::cout << "unsigned char:\n";
    std::cout << "Size: " << sizeof(unsigned char) << " byte(s)\n";
    std::cout << "Range: [" << int(std::numeric_limits<unsigned char>::lowest()) << "," << int(std::numeric_limits<unsigned char>::max()) << "]\n";
    std::cout << "Range: [" << int(std::numeric_limits<unsigned char>::min()) << "," << int(std::numeric_limits<unsigned char>::max()) << "]\n";
    std::cout << "-----------------------\n";

    //short
    std::cout << "short:\n";
    std::cout << "Size: " << sizeof(short) << " byte(s)\n";
    std::cout << "Range: [" << std::numeric_limits<short>::lowest() << ","  << std::numeric_limits<short>::max() << "]\n";
    std::cout << "Range: [" << std::numeric_limits<short>::min() << ","  << std::numeric_limits<short>::max() << "]\n";
    std::cout << "-----------------------\n";

    //unsigned short
    std::cout << "unsigned short:\n";
    std::cout << "Size: " << sizeof(unsigned short) << " byte(s)\n";
    std::cout << "Range: [" << std::numeric_limits<unsigned short>::lowest() << "," << std::numeric_limits<unsigned short>::max() << "]\n";
    std::cout << "Range: [" << std::numeric_limits<unsigned short>::min() << "," << std::numeric_limits<unsigned short>::max() << "]\n";
    std::cout << "-----------------------\n";

    //int
    std::cout << "int:\n";
    std::cout << "Size: " << sizeof(int) << " byte(s)\n";
    std::cout << "Range: [" << std::numeric_limits<int>::lowest() << "," << std::numeric_limits<int>::max() << "]\n";
    std::cout << "Range: [" << std::numeric_limits<int>::min() << "," << std::numeric_limits<int>::max() << "]\n";
    std::cout << "-----------------------\n";

    //unsigned int
    std::cout << "unsigned int:\n";
    std::cout << "Size: " << sizeof(unsigned int) << " byte(s)\n";
    std::cout << "Range: [" << std::numeric_limits<unsigned int>::lowest() << "," << std::numeric_limits<unsigned int>::max() << "]\n";
    std::cout << "Range: [" << std::numeric_limits<unsigned int>::min() << "," << std::numeric_limits<unsigned int>::max() << "]\n";
    std::cout << "-----------------------\n";

    //long
    std::cout << "long:\n";
    std::cout << "Size: " << sizeof(long) << " byte(s)\n";
    std::cout << "Range: [" << std::numeric_limits<long>::lowest() << "," << std::numeric_limits<long>::max() << "]\n";
    std::cout << "Range: [" << std::numeric_limits<long>::min() << "," << std::numeric_limits<long>::max() << "]\n";
    std::cout << "-----------------------\n";

    //unsigned long
    std::cout << "unsigned long:\n";
    std::cout << "Size: " << sizeof(unsigned long) << " byte(s)\n";
    std::cout << "Range: [" << std::numeric_limits<unsigned long>::lowest() << "," << std::numeric_limits<unsigned long>::max() << "]\n";
    std::cout << "Range: [" << std::numeric_limits<unsigned long>::min() << "," << std::numeric_limits<unsigned long>::max() << "]\n";
    std::cout << "-----------------------\n";

    //long long int
    std::cout << "long long int:\n";
    std::cout << "Size: " << sizeof(long long int) << " byte(s)\n";
    std::cout << "Range: [" << std::numeric_limits<long long int>::lowest() << "," << std::numeric_limits<long long int>::max() << "]\n";
    std::cout << "Range: [" << std::numeric_limits<long long int>::min() << "," << std::numeric_limits<long long int>::max() << "]\n";
    std::cout << "-----------------------\n";

    //unsigned long long int
    std::cout << "unsigned long long int:\n";
    std::cout << "Size: " << sizeof(unsigned long long int) << " byte(s)\n";
    std::cout << "Range: [" << std::numeric_limits<unsigned long long>::lowest() << "," << std::numeric_limits<unsigned long long>::max() << "]\n";
    std::cout << "Range: [" << std::numeric_limits<unsigned long long>::min() << "," << std::numeric_limits<unsigned long long>::max() << "]\n";
    std::cout << "-----------------------\n";

    //float
    std::cout << "float:\n";
    std::cout << "Size: " << sizeof(float) << " byte(s)\n";
    std::cout.precision(10); // Set precision for floating-point output
    std::cout << "Range: [" << std::numeric_limits<float>::lowest() << ","<< std::numeric_limits<float>::max() << "]\n";
    std::cout << "Range: [" << std::numeric_limits<float>::min() << ","<< std::numeric_limits<float>::max() << "]\n";
    std::cout << "-----------------------\n";

    //double
    std::cout << "double:\n";
    std::cout << "Size: " << sizeof(double) << " byte(s)\n";
    std::cout.precision(15); // Set precision for floating-point output
    std::cout << "Range: [" << std::numeric_limits<double>::lowest() << "," << std::numeric_limits<double>::max() << "]\n";
    std::cout << "Range: [" << std::numeric_limits<double>::min() << "," << std::numeric_limits<double>::max() << "]\n";
    std::cout << "-----------------------\n";

    //long double
    std::cout << "long double:\n";
    std::cout << "Size: " << sizeof(long double) << " byte(s)\n";
    std::cout.precision(18); // Set precision for floating-point output
    std::cout << "Range: [" << std::numeric_limits<long double>::lowest() << ", " << std::numeric_limits<long double>::max() << "]\n";
    std::cout << "Range: [" << std::numeric_limits<long double>::min() << ", " << std::numeric_limits<long double>::max() << "]\n";
    std::cout << "-----------------------\n";


    return 0;
}
