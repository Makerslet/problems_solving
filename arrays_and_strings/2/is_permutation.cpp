#include "is_permutation.h"
#include <array>
#include <algorithm>

namespace arrays_and_structs {

size_t char_to_size_t(char symbol) {
    int v = symbol;
    return  static_cast<std::size_t>(v + 128);
}

bool is_permutation(const std::string& str_1, const std::string& str_2) {

    bool result = false;
    if(str_1.size() != str_2.size())
        return result;

    std::array<int, 256> counters;
    std::fill(std::begin(counters), std::end(counters), 0);

    for(std::size_t index = 0; index < str_1.size(); ++index) {
        ++counters[char_to_size_t(str_1[index])];
        --counters[char_to_size_t(str_2[index])];
    }

    auto predicate = [](int value) { return value == 0; };
    result = std::find_if_not(std::begin(counters), std::end(counters), predicate) == counters.cend();

    return result;
}

}
