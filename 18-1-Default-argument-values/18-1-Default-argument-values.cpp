
#include <iostream>
#include <string>

void foo(int i = 4, float j = 4.3, std::string str = "Hello World")
{
    std::cout << i << " " << j << " " << str << std::endl;
}

int main()
{
    foo();
}

