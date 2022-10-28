#pragma once
#include <string>
#include <tuple>

using std::string;

enum TokenType {
    Number, Class, Union, Enum, Type, Sizeof, Return, Continue, Break, If, Else, Switch, Case, Default, For, Do, While, Real
};

struct Token {
    TokenType type;
    string value;
    string next(string src);
};

