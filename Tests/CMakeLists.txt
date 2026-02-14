find_package(Catch2 REQUIRED)

file(GLOB test_sources "*.cpp")
add_executable(tests ${test_sources})

include(CTest)
include(Catch)
catch_discover_tests(tests)

if(RUN_TEST)

add_custom_target(build_and_test ALL
  DEPENDS tests
  COMMAND echo "----------------------"
  COMMAND echo "    Running Tests:    "
  COMMAND echo "----------------------"
  COMMAND ${CMAKE_BINARY_DIR}/Tests/tests --order rand -d yes -v high
  COMMAND echo "Run `${CMAKE_BINARY_DIR}/Tests/tests -?` to get more options on possible test running settings"
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
  VERBATIM
)

endif()

target_link_libraries(tests
  PRIVATE
    Catch2::Catch2WithMain
    MathLib
)

