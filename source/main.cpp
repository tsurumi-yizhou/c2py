#include <iostream>
#include <token.h>

int main()
{
    std::string text = "    int main() { printf(\"Hello,world!\"); }";
    Token t;
    text = t.next(text);
    std::cout << text << std::endl;
    return 0;
}

