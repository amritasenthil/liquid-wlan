/*
 * Copyright (c) 2011 Joseph Gaeddert
 * Copyright (c) 2011 Virginia Polytechnic Institute & State University
 *
 * This file is part of liquid.
 *
 * liquid is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * liquid is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with liquid.  If not, see <http://www.gnu.org/licenses/>.
 */

//
// Run-time library version numbers
//

#include "liquid-802-11.h"

const char liquid_802_11_version[] = LIQUID_802_11_VERSION;

const char * liquid_802_11_libversion(void)
{
    return LIQUID_802_11_VERSION;
}

int liquid_802_11_libversion_number(void)
{
    return LIQUID_802_11_VERSION_NUMBER;
}

