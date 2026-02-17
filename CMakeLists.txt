cmake_minimum_required(VERSION 3.10.0)
project(lb_1 VERSION 0.1.0 LANGUAGES C CXX)

# явно указываем использование g++
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_C_COMPILER "/usr/bin/gcc")

# настройки компиляции
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# название исполняемого файла
set(TARGET_NAME lab_01)

# пути к исходным файлам
set(SOURCES
    src/main.cpp
    src/functions.cpp
)

# пути к заголовочным файлам
include_directories(include)

# создаем исполняемый файл
add_executable(${TARGET_NAME} ${SOURCES})


# сообщаем о успешной конфигурации
message(STATUS "Project configured for g++ compiler")