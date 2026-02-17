find_package(Catch2 REQUIRED)

file(GLOB test_sources "*.cpp")
add_executable(library_tests ${test_sources})

include(CTest)
include(Catch)
catch_discover_tests(library_tests)

if(RUN_TEST)

add_custom_target(build_and_test_library ALL
  DEPENDS library_tests
  COMMAND echo "----------------------"
  COMMAND echo "    Running Tests:    "
  COMMAND echo "----------------------"
  COMMAND $<TARGET_FILE:library_tests> --order rand -d yes -v high
  COMMAND echo "Run `$<TARGET_FILE:library_tests> -?` to get more options on possible test running settings"
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
  VERBATIM
)

endif()

target_link_libraries(library_tests
  PRIVATE
    Catch2::Catch2WithMain
    Library
)

