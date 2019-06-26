project (first_project)			# mandatory
cmake_minimum_required (VERSION 3.1)	# mandatory
set (CMAKE_CXX_STANDARD 11)		# use c++11

set (CMAKE_CXX_STANDARD 11)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_FLAGS "-Wall -Wextra -fPIC")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

##############################################################################
############################ TUTORIAL ########################################
# (1) set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) 
# - If commented out, it will generate the binaries in build/src folder for src files, and build/test folder for test files.
# - If uncommented, a folder bin will be generated where you can find the executable. 
# - The executable file is created because add_executable command is called in src folder
# 
# (2) set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib) 
# - If commented out, shared library is created in build/src folder
# - this is because add_library command issued in src folder
# - if uncommented, a lib folder will be created to store the generated libraries


include_directories (include) 		# the header files to be included are in include folder

add_subdirectory(src)
enable_testing()
add_subdirectory(test)

