add_library(Library)
file(GLOB PROG_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
target_sources(Prog
  PRIVATE
    ${PROG_SOURCES}
)

target_include_directories(Library
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/headers
)

target_compile_features(Library PRIVATE cxx_std_20)

if(BUILD_TEST)
    add_subdirectory(tests)
endif()

if(MSVC)
  target_compile_options(Library PRIVATE /W4 /WX)
else()
  target_compile_options(Library PRIVATE -Wall -Wextra -Wpedantic -Wformat=2 -Wconversion -Wshadow -Wfloat-equal -Wundef )
endif()
