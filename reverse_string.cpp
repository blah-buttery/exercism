#include "reverse_string.h"

std::string reverse_string::reverse_string(const std::string& forward)
{
    std::stack<char> string_stack;

    for (auto i : forward)
        string_stack.push(i);

    char temp = '\0';
    std::string reverse;

    while (!string_stack.empty())
    {
        temp = string_stack.top();
        reverse.push_back(temp);
        string_stack.pop();
    }
    return reverse;
}
