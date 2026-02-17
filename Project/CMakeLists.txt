add_executable(Prog)
target_include_directories(Prog
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
file(GLOB PROG_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
target_sources(Prog
  PRIVATE
    ${PROG_SOURCES}
)

target_link_libraries(Prog
  PRIVATE
    Library
)


target_compile_features(Prog PRIVATE cxx_std_20)

if(BUILD_TEST)
    add_subdirectory(tests)
endif()

if(MSVC)
  target_compile_options(Prog PRIVATE /W4 /WX)
else()
  target_compile_options(Prog PRIVATE -Wall -Wextra -Wpedantic -Wformat=2 -Wconversion -Wshadow -Wfloat-equal -Wundef )
endif()