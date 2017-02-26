cmake_minimum_required(VERSION 3.7.1)

project(cpp_learning)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(src/HelloWorld)
add_subdirectory(src/FirstLookCin)
add_subdirectory(src/FunctionParameters)
add_subdirectory(src/SeveralFiles)
add_subdirectory(src/FirstChapterQuiz)
