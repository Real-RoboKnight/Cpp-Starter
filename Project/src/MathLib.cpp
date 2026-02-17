/**
 * \file MathLib.cpp
 * \author Dylan Shah (code@dylan-shah.com)
 * \brief Dummy File
 * \version 0.1
 * \date 2026-02-13
 *
 * \copyright Copyright (c) 2026
 *
 * \parblock License
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <https://www.gnu.org/licenses/>.
 * \endparblock
 *
 */
#include "struct.hpp"
#include <iostream>
#include <MathFunctions.hpp>

int main(int argc, char const* argv[]) {
    float x, y;
    std::cout << "Enter two numbers:\n";
    std::cin >> x >> y;
    foo bar{ x, y };
    std::cout << std::hex << &bar;
    return 0;
}
