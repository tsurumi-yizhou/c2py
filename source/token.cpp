#include <token.h>

string Token::next(string src) {
    int n = 0;
    while(src[n] == ' ') n ++;
    return src.substr(n);
}
