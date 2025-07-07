# CMake file for LV2 rt-neural-x10 plugin

cmake_minimum_required(VERSION 3.15)

project(rt-neural-x10)

# flags and definitions
set(CMAKE_CXX_STANDARD 17)

set(RTNEURAL_XSIMD ON CACHE BOOL "Use RTNeural with this backend")
message("RTNEURAL_XSIMD in ${CMAKE_PROJECT_NAME} = ${RTNEURAL_XSIMD}")

# add external libraries
add_subdirectory(../modules/RTNeural ${CMAKE_CURRENT_BINARY_DIR}/RTNeural)

# check for lv2 using pkgconfig
find_package(PkgConfig)
pkg_check_modules(LV2 REQUIRED lv2>=1.10.0)

# configure executable
add_library(rt-neural-x10 SHARED
    src/rt-neural-generic.cpp # Source filename is kept generic
    ../common/Biquad.cpp
)

# include and link directories
include_directories(rt-neural-x10
    ./src
    ../common
    ${LV2_INCLUDE_DIRS}
    ../modules/RTNeural/modules/json
    ../modules/RTNeural)

link_directories(rt-neural-x10
    ./src
    ../common
    ${LV2_LIBRARY_DIRS}
    ../modules/RTNeural
    ../modules/RTNeural/modules/json)

# configure target
target_compile_definitions(rt-neural-x10 PUBLIC
    AIDADSP_COMMERCIAL=0
    AIDADSP_MODEL_LOADER=1
)
target_link_libraries(rt-neural-x10 ${LV2_LIBRARIES} RTNeural)
set_target_properties(rt-neural-x10 PROPERTIES PREFIX "") # Ensures librt-neural-x10.so becomes rt-neural-x10.so

# setup install dir
set(LV2_INSTALL_DIR ${DESTDIR}${PREFIX}/rt-neural-x10.lv2) # Bundle directory

# config install
install(TARGETS rt-neural-x10 # This refers to the library target
    DESTINATION ${LV2_INSTALL_DIR} # Installs rt-neural-x10.so into the bundle
)

install(DIRECTORY ttl/ # Copies the entire ttl directory (containing rt-neural-x10.ttl, manifest.ttl, modgui/)
    DESTINATION ${LV2_INSTALL_DIR}
)

install(DIRECTORY ../models # Copies models into the bundle
    DESTINATION ${LV2_INSTALL_DIR}
)
