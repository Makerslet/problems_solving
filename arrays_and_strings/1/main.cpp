#include "uniq_symbols.h"
#include <vector>
#include <iostream>

int main(int, char**)
{
    using strings = std::vector<std::string>;

    strings strs = {"1", "hello", "hank ", "", "_ef Ui"};
    for(const std::string& str : strs)
        std::cout << str << "\t" << arrays_and_structs::contains_only_uniq_syms(str) << std::endl;

    return 0;
}
