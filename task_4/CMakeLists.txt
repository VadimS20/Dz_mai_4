﻿# CMakeList.txt: проект CMake для task_4; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (task_4 "task_4.cpp" "task_4.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET task_4 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
