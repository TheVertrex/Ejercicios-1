cmake_minimum_required(VERSION 3.27)
project(C__)

set(CMAKE_CXX_STANDARD 17)

add_executable(main MayorDeDos.cpp
        NumeroParOImpar.cpp
        CalcularFactorialWhile.cpp
        NumerosImparesFor.cpp
        NumerosImparesWhile.cpp
        NombreDelDiaSwitch.cpp
        ElegirEjercicios.cpp)
add_executable(MayorDeEdad MayorDeEdad.cpp)
add_executable(NumeroParOImpar NumeroParOImpar.cpp)
add_executable(CalcularFactorialWhile CalcularFactorialWhile.cpp)
add_executable(NumerosImparesFor NumerosImparesFor.cpp)
add_executable(NumerosImparesWhile NumerosImparesWhile.cpp)
add_executable(NombreDelDiaSwitch NombreDelDiaSwitch.cpp)
add_executable(ElegirEjercicios ElegirEjercicios.cpp)