find_package(Catch2 REQUIRED)

file(GLOB test_sources "*.cpp")
add_executable(prog_tests ${test_sources})

include(CTest)
include(Catch)
catch_discover_tests(prog_tests)

if(RUN_TEST)

add_custom_target(build_and_test_prog ALL
  DEPENDS tests
  COMMAND echo "----------------------"
  COMMAND echo "    Running Tests:    "
  COMMAND echo "----------------------"
  COMMAND $<TARGET_FILE:prog_tests> --order rand -d yes -v high
  COMMAND echo "Run `${CMAKE_BINARY_DIR}/Tests/tests -?` to get more options on possible test running settings"
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
  VERBATIM
)

endif()

target_link_libraries(prog_tests
  PRIVATE
    Catch2::Catch2WithMain
)

