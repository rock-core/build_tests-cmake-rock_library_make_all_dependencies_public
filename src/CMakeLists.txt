rock_add_public_dependencies(rock_library_make_all_dependencies_public PKGCONFIG
    plain_package)
rock_make_all_dependencies_public(rock_library_make_all_dependencies_public
    PKGCONFIG)
rock_library(rock_library_make_all_dependencies_public
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp
    DEPS_PKGCONFIG plain_package)

rock_executable(rock_library_make_all_dependencies_public_bin Main.cpp
    DEPS rock_library_make_all_dependencies_public)

