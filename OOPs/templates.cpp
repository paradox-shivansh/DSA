#include <iostream>
// using namespace std;  // Now we can use cout, endl directly

template <class T>
T max(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    std::cout << max(3, 7) << std::endl;         // T deduced as int
    std::cout << max(3.14, 2.71) << std::endl;   // T deduced as double
    std::cout << max('a', 'z') << std::endl;     // T deduced as char

    // Explicit type if needed
    std::cout << max<double>(3.5, 2) << std::endl;

    return 0;
}