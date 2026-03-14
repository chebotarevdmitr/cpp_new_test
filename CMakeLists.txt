# Минимальная версия CMake, требуемая для проекта
cmake_minimum_required(VERSION 3.20)

# Имя проекта
project(MyConstexprProject)

# Указываем стандарт C++, который мы будем использовать
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # Требовать C++20, иначе ошибка

# Добавляем исполняемый файл, который будет создан из main.cpp
add_executable(my_constexpr_app main.cpp)

# (Опционально) Добавляем флаги для лучшей диагностики
target_compile_options(my_constexpr_app PRIVATE -Wall -Wextra -g)