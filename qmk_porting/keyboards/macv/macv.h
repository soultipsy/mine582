/*
Copyright 2022 Huckies <https://github.com/Huckies>
Copyright 2023 OctopusZ <https://github.com/OctopusZ>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"
#include "extra_keycode.h"

// clang-format off

#define LAYOUT_all( \
	K000, K001,                         K006, K007, K008, K009,                                    \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110,                              \
	K200,             K203, K204, K205, K206, K207, K208, K209,                         K214,      \
	      K301, K302,       K304, K305,       K307,       K309,                               K315,\
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409,                                    \
    K500, K501, K502, K503, K504, K505, K506, K507, K508, K509,                                    \
    K600, K601,                                                                                    \
	            K702, K703, K704, K705, K706, K707, K708, K709,                                    \
	K800, K801, K802, K803, K804, K805, K806, K807, K808, K809,                         K814,      \
	                                                                  K911, K912, K913,            \
) \
{ \
    { K000, K001, KC_NO,KC_NO,KC_NO,KC_NO,K006, K007, K008, K009, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO}, \
    { K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO}, \
    { K200, KC_NO,KC_NO,K203, K204, K205, K206, K207, K208, K209, KC_NO,KC_NO,KC_NO,KC_NO,K214, KC_NO}, \
    { KC_NO,K301, K302, KC_NO,K304, K305, KC_NO,K307,KC_NO, K309, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,K315 }, \
    { K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO}, \
    { K500, K501, K502, K503, K504, K505, K506, K507, K508, K509, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO}, \
    { K600, K601, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO}, \
    { KC_NO,KC_NO,K702, K703, K704, K705, K706, K707, K708, K709, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO}, \
    { K800, K801, K802, K803, K804, K805, K806, K807, K808, K809, KC_NO,KC_NO,KC_NO,KC_NO,K814, KC_NO}, \
    { KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,K911, K912, K913, KC_NO,KC_NO} \
}
