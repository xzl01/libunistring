/* Formatted output to strings.
   Copyright (C) 1999-2000, 2002, 2006-2007, 2009-2018 Free Software
   Foundation, Inc.

   This program is free software: you can redistribute it and/or
   modify it under the terms of either:

     * the GNU Lesser General Public License as published by the Free
       Software Foundation; either version 3 of the License, or (at your
       option) any later version.

   or

     * the GNU General Public License as published by the Free
       Software Foundation; either version 2 of the License, or (at your
       option) any later version.

   or both in parallel, as here.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include "unistdio/u-printf-parse.h"

#define PRINTF_PARSE u8_printf_parse
#define CHAR_T uint8_t
#define DIRECTIVE u8_directive
#define DIRECTIVES u8_directives
#include "printf-parse.c"
