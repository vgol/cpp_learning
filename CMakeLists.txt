cmake_minimum_required(VERSION 3.7.1)

project(cpp_learning)

set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)

add_subdirectory(src/HelloWorld)
add_subdirectory(src/FirstLookCin)
add_subdirectory(src/FunctionParameters)
add_subdirectory(src/SeveralFiles)
add_subdirectory(src/Chapter1Quiz)
add_subdirectory(src/Chapter2Quiz)
add_subdirectory(src/IsPrime)
add_subdirectory(src/IsEven)
add_subdirectory(src/BinaryConversion)
add_subdirectory(src/BitWise)
add_subdirectory(src/Scope)
