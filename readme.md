# A project to familiarize myself with cmake and catch2 tests.

This project can be used as a spring-board for other cpp projects.

Just duplicate and rename the library if needed and change the tests. 


Make build system (Do once):
```sh
cmake -S. -B build
```

Make Executable
```sh
cmake --build build
```

Make Docs
```sh
doxygen
```

# Dependencies

- catch2
- cmake
- doxygen (for docs)

## License 
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

A copy of the license can be found here: \ref License.md