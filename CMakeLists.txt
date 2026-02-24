cmake_minimum_required(VERSION 3.25)

project(Roblox2Mod)

find_package(Geode REQUIRED)

add_geode_mod(
    lisi445.roblox2
    SOURCES src/main.cpp
)
