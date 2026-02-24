cmake_minimum_required(VERSION 3.25)

project(Roblox2Mod)

find_package(Geode REQUIRED)

add_geode_mod(
    lisi445.roblox_mod
    SOURCES src/main.cpp
)

set_target_properties(lisi445.roblox_mod PROPERTIES GEODE_MOD_ID "lisi445.roblox_mod")
