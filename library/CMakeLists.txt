cmake_minimum_required(VERSION 3.4)
project(Library)

set(BOOST_ROOT "/usr/lib64")

set(SOURCE_FILES
	src/Client.cpp
	src/ClientsManager.cpp
	src/ClientsRepository.cpp
	src/Company.cpp
	src/Person.cpp
	src/Reception.cpp
	src/Rent.cpp
	src/RentsRepository.cpp
	src/Room.cpp
	src/RoomRepository.cpp
	src/RoomsManager.cpp
	src/RoomType.cpp
	src/Exception.cpp
	src/ExceptionRent.cpp
	src/ExceptionRoom.cpp
)
find_package(Boost 1.60 REQUIRED)

add_library(Library ${SOURCE_FILES} ${Boost_LIBRARIES})

target_include_directories(Library PUBLIC include ${Boost_INCLUDE_DIRS})

enable_testing()

find_package (Boost 1.60.0 COMPONENTS "unit_test_framework" REQUIRED)

include_directories(
${CMAKE_CURRENT_SOURCE_DIR}/include
${Boost_INCLUDE_DIRS}
)

set(SOURCE_TEST_HUMAN_FILES
		test/master.cpp
		test/ClientTest.cpp
		test/RoomTest.cpp
		test/RoomRepositoryTest.cpp
		test/RoomsManagerTest.cpp
		test/ClientsRepositoryTest.cpp
		)

add_executable (Test ${SOURCE_TEST_HUMAN_FILES})

target_link_libraries (Test
Library
boost_date_time
${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
)

add_test(TestHotelu Test
--report_level=detailed
--log_level=all
--color_output=yes
--show_progress=true
)

add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
${CMAKE_CTEST_COMMAND} -C $<CONFIG> --verbose
WORKING_DIRECTORY ${CMAKE_BINARY_DIR})