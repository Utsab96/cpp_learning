#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Size of data types in C++:\n\n";

    cout << "int: " << sizeof(int) << " bytes (" << sizeof(int)*8 << " bits)" << endl;
    cout << "float: " << sizeof(float) << " bytes (" << sizeof(float)*8 << " bits)" << endl;
    cout << "double: " << sizeof(double) << " bytes (" << sizeof(double)*8 << " bits)" << endl;
    cout << "char: " << sizeof(char) << " bytes (" << sizeof(char)*8 << " bits)" << endl;
    cout << "bool: " << sizeof(bool) << " bytes (" << sizeof(bool)*8 << " bits)" << endl;
    cout << "short: " << sizeof(short) << " bytes (" << sizeof(short)*8 << " bits)" << endl;
    cout << "long: " << sizeof(long) << " bytes (" << sizeof(long)*8 << " bits)" << endl;
    cout << "long long: " << sizeof(long long) << " bytes (" << sizeof(long long)*8 << " bits)" << endl;

    cout << "\nUnsigned types:\n";
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes (" << sizeof(unsigned int)*8 << " bits)" << endl;
    cout << "unsigned short: " << sizeof(unsigned short) << " bytes (" << sizeof(unsigned short)*8 << " bits)" << endl;
    cout << "unsigned long: " << sizeof(unsigned long) << " bytes (" << sizeof(unsigned long)*8 << " bits)" << endl;

    cout << "\nRange of int:\n";
    cout << "Min: " << numeric_limits<int>::min() << endl;
    cout << "Max: " << numeric_limits<int>::max() << endl;

    cout << "\nRange of unsigned int:\n";
    cout << "Min: " << numeric_limits<unsigned int>::min() << endl;
    cout << "Max: " << numeric_limits<unsigned int>::max() << endl;

    return 0;
}