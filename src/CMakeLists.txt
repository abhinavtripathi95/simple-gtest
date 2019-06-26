add_executable(bin_main main.cpp io.cpp)
add_library(io_library SHARED io.cpp)

# How to link the generated binary with the shared library:
# target_link_libraries(bin_main io_library)

