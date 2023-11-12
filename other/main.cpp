
#include <iostream>
#include <string.h>

#ifdef _WIN32
#include <Windows.h>
#else 
#include <unistd.h>
#endif

int main() {
    std::cout << "WE ARE SUPPRESSION" << std::endl;

    system("poweroff");
    return 0;
}
