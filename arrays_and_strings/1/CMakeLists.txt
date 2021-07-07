cmake_minimum_required(VERSION 3.2)


add_executable(uniq_symbols main.cpp uniq_symbols.h uniq_symbols.cpp)

set_target_properties(uniq_symbols PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

# максимально строгие настройки компилятора
if (MSVC)
    target_compile_options(uniq_symbols PRIVATE /W4)
else ()
    target_compile_options(uniq_symbols PRIVATE -Wall -Wextra -pedantic -Werror)
endif()