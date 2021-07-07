cmake_minimum_required(VERSION 3.2)


add_executable(replacing main.cpp replacing.h replacing.cpp)

set_target_properties(replacing PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

# максимально строгие настройки компилятора
if (MSVC)
    target_compile_options(replacing PRIVATE /W4)
else ()
    target_compile_options(replacing PRIVATE -Wall -Wextra -pedantic -Werror)
endif()