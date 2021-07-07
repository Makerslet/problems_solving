cmake_minimum_required(VERSION 3.2)


add_executable(is_permutation main.cpp is_permutation.h is_permutation.cpp)

set_target_properties(is_permutation PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

# максимально строгие настройки компилятора
if (MSVC)
    target_compile_options(is_permutation PRIVATE /W4)
else ()
    target_compile_options(is_permutation PRIVATE -Wall -Wextra -pedantic -Werror)
endif()