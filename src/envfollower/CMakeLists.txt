#CMake file for infamous stuck

set(PLUGIN "envfollower")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -g -std=c99 -msse2 -mfpmath=sse -ffast-math")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g")

if(NOT LIBDIR)
  set(LIBDIR "lib")
endif(NOT LIBDIR)

# check for our various libraries
find_package(PkgConfig)
pkg_check_modules(CAIRO cairo)
pkg_check_modules(NTK ntk)
pkg_check_modules(LV2 REQUIRED lv2>=.0.1.0)

include_directories (${LV2_INCLUDE_DIRS} ${NTK_INCLUDE_DIRS} ${CAIRO_INCLUDE_DIRS} ../ffffltk ../draw . )
link_directories (${LV2_LIBRARY_DIRS} ${NTK_LIBRARY_DIRS} ${CAIRO_LIBRARY_DIRS})

find_program(FLTK_FLUID_EXECUTABLE ntk-fluid)
fltk_wrap_ui(${PLUGIN}_ui ${PLUGIN}_ui.fl)

# config libraries

add_library(${PLUGIN} SHARED
  envfollower.c
  envfollower.h
  rms_calc.c
  rms_calc.h
  constants.h
)

add_library(${PLUGIN}_ui SHARED
  envfollower.h
  envfollower_ui_main.cxx
  ${${PLUGIN}_ui_FLTK_UI_SRCS}
)

set_target_properties(${PLUGIN} PROPERTIES PREFIX "")
set_target_properties(${PLUGIN}_ui PROPERTIES PREFIX "")

set_target_properties(${PLUGIN} PROPERTIES BUILD_WITH_INSTALL_RPATH TRUE)
set_target_properties(${PLUGIN}_ui PROPERTIES BUILD_WITH_INSTALL_RPATH TRUE)

target_link_libraries(${PLUGIN} ${LV2_LIBRARIES} m)
target_link_libraries(${PLUGIN}_ui ${LV2_LIBRARIES} ${NTK_LIBRARIES} ${CAIRO_LIBRARIES} m)

# config install
install(TARGETS ${PLUGIN}
  LIBRARY
  COMPONENT no-GUI
  DESTINATION ${CMAKE_INSTALL_PREFIX}/${LIBDIR}/lv2/${PLUGIN}.lv2
)

install(TARGETS ${PLUGIN}_ui
  LIBRARY
  DESTINATION ${CMAKE_INSTALL_PREFIX}/${LIBDIR}/lv2/${PLUGIN}.lv2
)

install (FILES manifest.ttl ${PLUGIN}.ttl
  COMPONENT no-GUI
  DESTINATION ${CMAKE_INSTALL_PREFIX}/${LIBDIR}/lv2/${PLUGIN}.lv2
)
