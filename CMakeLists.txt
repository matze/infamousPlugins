cmake_minimum_required(VERSION 2.8)

project(infamous-plugins)

set(LIBDIR lib CACHE STRING "Specifies the name of the library path")

add_custom_target(no-GUI)

foreach(plug casynth envfollower hip2b powerup powercut cheapdist stuck ewham duffer lushlife)
    add_subdirectory(src/${plug})
    add_dependencies(no-GUI ${plug})
endforeach(plug)

add_executable(infamous-rule
    src/rule.c
)
install(TARGETS infamous-rule
  DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
)

# uninstall target
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)

add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)

