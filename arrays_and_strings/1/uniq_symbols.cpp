#include "uniq_symbols.h"
#include <array>
#include <algorithm>

namespace arrays_and_structs {

size_t char_to_size_t(char symbol) {
    int v = symbol;
    return  static_cast<std::size_t>(v + 128);
}

bool contains_only_uniq_syms(const std::string& str) {

    std::array<std::size_t, 256> counters;
    std::fill(std::begin(counters), std::end(counters), 0);

    for(char symbol : str)
        ++counters[char_to_size_t(symbol)];

    auto predicate = [](std::size_t value) { return value > 1; };
    return !std::any_of(std::begin(counters), std::end(counters), predicate);
}

}
