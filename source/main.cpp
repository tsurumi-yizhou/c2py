#include <iostream>
#include <token.h>

int main()
{
    std::string text = " int main() { printf(\"Hello,world!\"); }";
    auto lines = split(text, ' ');
    for(auto line: lines){
        std::cout << line << std::endl;
    }
    return 0;
}

