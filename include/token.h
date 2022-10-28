#pragma once
#include <string>
#include <tuple>
#include <vector>

using std::string;
using std::vector;

enum TokenType {
    Number, Class, Union, Enum, Type, Sizeof, Return, Continue, Break, If, Else, Switch, Case, Default, For, Do, While, Real
};

struct Token {
    TokenType type;
    string value;
};

vector<string> split(string origin, char tag) {
    vector<size_t> pos;
    vector<string> result;
    for(auto i = 0; i < origin.size(); i++) {
        if (origin[i] == tag) {
            pos.push_back(i);
        }
    }
    for (auto i = 1; i < pos.size(); i ++)
        result.push_back(origin.substr(pos[i - 1], pos[i] - pos[i - 1]));
    if (*pos.end() == origin.size())
        result.push_back(origin.substr(*pos.end()));
    return result;
}
