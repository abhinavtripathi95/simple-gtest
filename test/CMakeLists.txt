add_subdirectory(/usr/src/gtest
		${PROJECT_BINARY_DIR}/gtest)

include(CTest)

set(TEST_BINARY ${PROJECT_NAME}_test) 

add_executable(${TEST_BINARY} test_tools.cpp)

target_link_libraries(${TEST_BINARY}
			io_library		# the library to test
			gtest gtest_main)	# google test libraries

add_test(
	NAME ${TEST_BINARY}
	COMMAND ${EXECUTABLE_OUTPUT_PATH}/${TEST_BINARY})
