cmake_minimum_required(VERSION 3.0)

project(sniffapp)

add_executable(sniffapp main.cpp Params.cpp Params.hpp Sniff.cpp Sniff.hpp FileID.cpp FileID.hpp tools.cpp tools.hpp)

install(TARGETS sniffapp RUNTIME DESTINATION bin)
