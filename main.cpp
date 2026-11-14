#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> ptr = std::make_unique<int>(100);
    std::cout << *ptr << "\n";
    *ptr = 200;
    std::cout << *ptr;

    return 0;
}