add_library(MathLib)

target_sources(MathLib
  PRIVATE
    src/MathLib.cpp

  PUBLIC
    FILE_SET HEADERS
    BASE_DIRS PublicIncludes
    FILES
      PublicIncludes/MathFunctions.hpp
)
target_compile_features(MathLib PRIVATE cxx_std_20)
if(MSVC)
  target_compile_options(MathLib PRIVATE /W4 /WX)
else()
  target_compile_options(MathLib PRIVATE -Wall -Wextra -Wpedantic -Wformat=2 -Wconversion -Wshadow -Wfloat-equal -Wundef )
endif()