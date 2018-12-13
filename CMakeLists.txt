cmake_minimum_required(VERSION 3.13)
project(builder)

set(CMAKE_CXX_STANDARD 14)

add_executable(builder main.cpp Pide.cpp Pide.h PideBuilder.cpp PideBuilder.h KasarliPideBuilder.cpp KasarliPideBuilder.h YumurtaliPideBuilder.cpp YumurtaliPideBuilder.h Pisir.cpp Pisir.h)