#include <RBKLib.h>
#include <iostream>

int main(int argc, char** argv)
{
    std::string str;
    while(1) {
        std::getline(std::cin, str);
        str = ConvertRegisterString(str, argv[1]);
        std::cout << str << std::endl;
    }
}
