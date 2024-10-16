# Необходимая версия cmake
cmake_minimum_required(VERSION 3.25)
project(
    # Название проэкта
    lesson7
    # Номер версии проэкта
    VERSION 1.0
    # Описание проэкта
    DESCRIPTION "Fibonacci sequence"
    # Язык программирования
    LANGUAGES CXX
)
# устанавливаем стандарт языка программирования
set(CMAKE_CXX_STANDART 17)
# устанавливаем стандарт обязательным
set(CMAKE_CXX_STANDART_REQUIRED 17)
# конфигурация сборки - Debug
set(CMAKE_BUILD_TYPE Debug)
# компилируем исполняемый файл
add_executable(lesson7)
# переменная со списком файлов исходного кода
set(sources
    main.cpp
)
# указываем список исходных файлов для построения lesson7
target_sources(lesson7 PRIVATE ${sources})