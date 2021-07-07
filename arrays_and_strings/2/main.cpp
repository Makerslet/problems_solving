#include "is_permutation.h"
#include <vector>
#include <iostream>

int main(int, char**)
{
    using strings = std::vector<std::string>;

    strings strs_1 = {"alfds", "abba", "blink ", "", "1", "1"};
    strings strs_2 = {"sfdg4", "baba", "blink ", "", "1 ", "1"};

    for(std::size_t index = 0; index < strs_1.size(); ++index) {
        std::cout << strs_1[index] << '\t' << strs_2[index] << '\t'
                  << arrays_and_structs::is_permutation(strs_1[index], strs_2[index]) << std::endl;
    }

    return 0;
}
