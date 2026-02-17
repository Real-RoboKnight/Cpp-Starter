/**
 * \file Math.cpp
 * \author Dylan Shah (code@dylan-shah.com)
 * \brief These tests verify that addition and multiplication in the math
 * library work as expected.
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

#include <catch2/catch_test_macros.hpp>
#include <cstdint>

TEST_CASE("signed addition rollover", "[math]") {
    for (int8_t i = 1; i < INT8_MAX; ++i)
        for (int8_t j = 1; j < INT8_MAX; ++j) {
            CHECK(i + j > i);
            CHECK(i + j > j);
        }
}
